#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


#include "re.h"
#include "ds.h"


#define NFA_E (0)
#define NFA_MATCH (INT_MAX)
#define NFA_SPLIT (INT_MAX - 1)
#define NFA_OP_CAT (INT_MAX - 2)
#define NFA_ANY (INT_MAX - 3)

#define NFA_MAX (INT_MAX - 10)


typedef struct nfa_state {
	int c;
	struct nfa_state* out[2];
} nfa_state;

union frag_out {
	union frag_out* next;
	nfa_state* state;
	nfa_state** pstate;
};

typedef struct nfa_frag {
	
	nfa_state* start;
	
	union frag_out out;
	
} nfa_frag;


static nfa_state terminal_state;


static int is_in_out_list(nfa_frag* f, nfa_state** st) {
	// go to the end of a
	union frag_out* fo = f->out.next;
	while(fo->next) {
		if(fo->pstate == st) return 1;
		fo = fo->next;
	}
	
	return 0;
}


static void print_frag_state(nfa_frag* f, nfa_state* st, int indent) {
	int term = is_in_out_list(f, &st);
	if(indent > 5) return;
	if(term) {
		printf("%*sTERM\n", indent, " ");
		return;
	}
	
	if(st->c == NFA_SPLIT) {
		printf("%*s%p: SPLIT  %p %p\n", indent, " ", st, st->out[0], st->out[1]);
		if(st->out[0]) print_frag_state(f, st->out[0], indent + 2);
		if(st->out[1]) print_frag_state(f, st->out[1], indent + 2);
	}
	else if(st->c == NFA_SPLIT) {
		printf("%*s%p: MATCH\n", indent, " ", st);
	}
	else {
		printf("%*s%p: '%c'  %p\n", indent, " ", st, st->c, st->out[0]);
		if(st->out[0]) print_frag_state(f, st->out[0], indent + 2);
	}
}

static void print_frag(nfa_frag* f, int indent) {
	printf("%*sF> %p, start: %p \n", indent, " ", f, f->start);
	
	print_frag_state(f, f->start, indent + 2);
	
	union frag_out* fo = &f->out;
	while(fo) {
		printf("%*s> %p\n", indent+2, " ", fo->state);
		fo = fo->next;
	}
}

static void print_state(nfa_state* st, int indent) {
	if(st->c == NFA_SPLIT) {
		printf("%*s%p: SPLIT  %p %p\n", indent, " ", st, st->out[0], st->out[1]);
	}
	else if(st->c == NFA_SPLIT) {
		printf("%*s%p: MATCH\n", indent, " ", st);
	}
	else {
		printf("%*s%p: '%c'  %p\n", indent, " ", st, st->c, st->out[0]);
	}
}

static nfa_state* new_state(int c, nfa_state* o1, nfa_state* o2) {
	nfa_state* st = calloc(1, sizeof(*st));
	
	st->c = c;
	st->out[0] = o1;
	st->out[1] = o2;
	
	return st;
}

static nfa_frag* new_frag() {
	nfa_frag* f = malloc(sizeof(*f));
	return f;
} 

static void append_frag_list(nfa_frag* a, nfa_frag* b) {
	
	// go to the end of a
	union frag_out* fo = a->out.next;
	while(fo->state) fo = fo->next;
	
	fo->next = b->out.next;
}

// set the out list to point to this state
static void patch_frag_list(nfa_frag* f, nfa_state* st) {
	
	print_frag(f, 4 );
	
	union frag_out* n;
	union frag_out* fo = &f->out;
	while(fo) {
		n = fo->next;
		fo->state = st;
		fo = n;
	}
	
}

static nfa_frag* frag_char(int c) {
	
	nfa_frag* f = new_frag();
	
	f->start = new_state(c, NULL, NULL);
	f->out.pstate = &f->start->out[0];
	f->out.next->state = NULL;
	
	return f;
}

static nfa_frag* frag_cat(nfa_frag* a, nfa_frag* b) {
	
	patch_frag_list(a, b->start);
	a->out.next = b->out.next;
	
	free(b);
	
	return a;
}


static nfa_frag* frag_alt(nfa_frag* a, nfa_frag* b) {
	
	nfa_frag* f = new_frag(); 
	f->out.next = a->out.next;
	
	f->start = new_state(NFA_SPLIT, a->start, b->start);
	
	append_frag_list(f, b);
	
	free(a);
	free(b);
	
	return f;
}

static nfa_frag* frag_opt(nfa_frag* a) {
	
	nfa_frag* f = new_frag(); 
	f->out.next = a->out.next;
	
	f->start = new_state(NFA_SPLIT, a->start, NULL);
	f->out.pstate = &f->start->out[1];
	
	append_frag_list(f, a);
	
	free(a);
	
	return f;
}


static nfa_frag* frag_star(nfa_frag* a) {
	
	nfa_frag* f = new_frag(); 
	f->start = new_state(NFA_SPLIT, a->start, NULL);
	
	patch_frag_list(a, f->start);
	
	f->out.pstate = &f->start->out[1];
	
	free(a);
	
	return f;
}

static nfa_frag* frag_plus(nfa_frag* a) {
	
	nfa_state* st = new_state(NFA_SPLIT, a->start, NULL);
	
	patch_frag_list(a, st);
	
	a->out.pstate = &st->out[1];
	
	return a;
}


enum re_token {
	TOK_NONE = 0,
	TOK_CAT,
	TOK_CAT_AUTO,
	TOK_ALT,
	TOK_STAR,
	TOK_PLUS,
	TOK_ANY,
	TOK_OPT,
	TOK_GRP_OP,
	TOK_GRP_CL,
};

static char* token_names[] = {
	[TOK_NONE] = "TOK_NONE",
	[TOK_CAT] = "TOK_CAT",
	[TOK_CAT_AUTO] = "TOK_CAT_AUTO",
	[TOK_ALT] = "TOK_ALT",
	[TOK_STAR] = "TOK_STAR",
	[TOK_PLUS] = "TOK_PLUS",
	[TOK_ANY] = "TOK_ANY",
	[TOK_OPT] = "TOK_OPT",
	[TOK_GRP_OP] = "TOK_GRP_OP",
	[TOK_GRP_CL] = "TOK_GRP_CL",
};

static int token_precedence[] = {
	[TOK_NONE] = 0,
	[TOK_CAT] = 9,
	[TOK_CAT_AUTO] = 9,
	[TOK_ALT] = 8,
	[TOK_STAR] = 12,
	[TOK_PLUS] = 12,
	[TOK_ANY] = 0,
	[TOK_OPT] = 12,
	[TOK_GRP_OP] = -1,
	[TOK_GRP_CL] = 99,
};

static char token_arity[] = {
	[TOK_NONE] = 0,
	[TOK_CAT] = 2,
	[TOK_CAT_AUTO] = 2,
	[TOK_ALT] = 2,
	[TOK_STAR] = 1,
	[TOK_PLUS] = 1,
	[TOK_ANY] = 0,
	[TOK_OPT] = 1,
	[TOK_GRP_OP] = 0,
	[TOK_GRP_CL] = 0,
};


typedef struct {
	char* s;
	
	int token;
	int c;
	
	VEC(int) op_stack;
	VEC(nfa_frag*) val_stack;
} re_parse_state;



static void print_op_stack(re_parse_state* ps, int indent) {
	printf("-op stack- (%d)\n", (int)VEC_LEN(&ps->op_stack));
	VEC_EACH(&ps->op_stack, pi, p) {
		printf("%*s%s\n", indent, " ", token_names[p]);
	}
}
static void print_val_stack(re_parse_state* ps, int indent) {
	printf("-val stack- (%d)\n", (int)VEC_LEN(&ps->val_stack));
	VEC_EACH(&ps->val_stack, pi, p) {
		print_frag(p, indent);
	}
}



static int classify_token(int c) {
	switch(c) {
		case '?': return TOK_OPT;  
		case '|': return TOK_ALT;  
		case '*': return TOK_STAR;  
		case '+': return TOK_PLUS;  
		case '.': return TOK_ANY;  
		case '(': return TOK_GRP_OP;  
		case ')': return TOK_GRP_CL;  
		default:
			return TOK_NONE;
	}
} 

static int peek_char(char* s) {
	int c = s[0];
	if(c == '\\') {
		return s[1];
	}
	return c;
}



// returns 0 when done
static int next_token(re_parse_state* ls) {
	
	int nc = peek_char(ls->s);
	int nt = classify_token(nc);
	
	if(nc == 0) return 0;
	
	if(token_arity[ls->token] != 2) { 
		if(token_arity[nt] < 1) { 
			// output an auto cat
			ls->token = TOK_CAT_AUTO;
			
			return 1;
		}
		
	}
	
	int c = ls->s[0];
	ls->s++;
	
	
	if(c == '\\') {
		c = ls->s[0];
		ls->s++;
	}
	
	ls->c = c;
	ls->token = classify_token(c);
	
	return 1;
}



static nfa_frag* pop_val(re_parse_state* ps) {
	if(0 == VEC_LEN(&ps->val_stack)) return NULL;
	nfa_frag* f;
	VEC_POP(&ps->val_stack, f);
	return f;
}

static void push_val(re_parse_state* ps, nfa_frag* f) {
	VEC_PUSH(&ps->val_stack, f);
}

static int pop_op(re_parse_state* ps) {
	if(0 == VEC_LEN(&ps->op_stack)) return TOK_NONE;
	int t;
	VEC_POP(&ps->op_stack, t);
	return t;
}

static void push_op(re_parse_state* ps, int t) {
	printf("pushing %s onto op stack \n", token_names[t]);
	VEC_PUSH(&ps->op_stack, t);
}


static int top_prec(re_parse_state* ps) {
	if(0 == VEC_LEN(&ps->op_stack)) return -INT_MAX;
	return token_precedence[VEC_TAIL(&ps->op_stack)];
}

static void run_op(re_parse_state* ps, int op) {
	nfa_frag* f1 = NULL;
	nfa_frag* f0 = NULL;
	nfa_frag* fn = NULL;
	printf("running op: %s\n", token_names[op]);
	print_op_stack(ps, 1);
	print_val_stack(ps, 1);
	
	
	switch(op) {
		case TOK_CAT:
		case TOK_CAT_AUTO:
			f1 = pop_val(ps);
			f0 = pop_val(ps);
			fn = frag_cat(f0, f1);
			push_val(ps, fn);
			break;
		case TOK_ALT:
			f1 = pop_val(ps);
			f0 = pop_val(ps);
			fn = frag_alt(f0, f1);
			push_val(ps, fn);
			break;
		case TOK_OPT: 
			f0 = pop_val(ps);
			fn = frag_opt(f0);
			push_val(ps, fn);
			break;
		case TOK_STAR: 
			f0 = pop_val(ps);
			fn = frag_star(f0);
			push_val(ps, fn);
			break;
		case TOK_PLUS: 
			f0 = pop_val(ps);
			fn = frag_plus(f0);
			push_val(ps, fn);
			break;
	}
}

//
// DFA Conversion
//


typedef struct dfa_edge {
	int c;
	struct dfa_state* out;
} dfa_edge;

typedef struct dfa_state {
	VEC(nfa_state*) set;
	VEC(int) out_chars;
	char final;
	
	VEC(dfa_edge) edges;
} dfa_state;

typedef dfa_state nfa_state_set;


static nfa_state_set* new_nfa_state_set() {
	nfa_state_set* s = calloc(1, sizeof(*s));
	return s;
}

static void push_nfa_set(nfa_state_set* set, nfa_state* st) {
	VEC_EACH(&set->set, si, s) {
		if(s == st) return;
	}
	
	VEC_PUSH(&set->set, st);
	for(int i = 0; i < 2; i++) {
		if(st->out[i] == NULL) continue;
		if(st->out[i]->c == NFA_SPLIT) continue; 
		VEC_EACH(&set->out_chars, ci, c) {
			if(st->out[i]->c == c) goto CONTINUE;
		}
		VEC_PUSH(&set->out_chars, st->out[i]->c);
	CONTINUE:
		(void)0;
	}
}

static void crawl_e(nfa_state_set* set, nfa_state* st) {
	if(st == NULL) return;
	if(st == &terminal_state) {
		set->final = 1;
		return;
	}
	
	push_nfa_set(set, st);
	
	if(st->c != NFA_SPLIT) return;
	crawl_e(set, st->out[0]);
	crawl_e(set, st->out[1]);
}

// static nfa_state_set* nfa_e_closure(nfa_state* st) {
// 	nfa_state_set* set = new_nfa_state_set();
// 	crawl_e(set, st);
// 	return set;
// }

static void nfa_set_e_closure(nfa_state_set* set, nfa_state* st) {
	if(st) push_nfa_set(set, st);
	
	VEC_EACH(&set->set, si, s) {
		crawl_e(set, s);
	}
}

static nfa_state_set* nfa_move(nfa_state_set* in, int move_c) {
	nfa_state_set* out = new_nfa_state_set();
	
	VEC_EACH(&in->out_chars, ci, c) {
		VEC_EACH(&in->set, si, st) {
			for(int i = 0; i < 2; i++) {
				if(st->out[i] == NULL) continue;
				if(st->out[i]->c == move_c) {
					push_nfa_set(out, st->out[i]);
				}
			}
		}
	}
	
	return out;
}

static void print_nfa_set(nfa_state_set* set, int indent) {
	VEC_EACH(&set->set, si, s) {
		printf("%*s[%d] %p\n", indent, " ", si, s);
	}
}






static void nfa_to_dfa(nfa_state* nstart) {
	
	VEC(nfa_state_set*) dfa_states;
	VEC_INIT(&dfa_states);
	
	
	nfa_state_set* start_set = new_nfa_state_set();
	nfa_set_e_closure(start_set, nstart);
	VEC_PUSH(&dfa_states, start_set);
	
	VEC_EACH(&dfa_states, dsi, ds) {
		printf("\ndfa loop %d %p\n", dsi, ds);
		print_nfa_set(ds, 2);
		
		VEC_EACH(&ds->out_chars, ci, c) {
			printf("  dfa loop chars %d (%d, %c)\n", (int)ci, c, c);
			
			nfa_state_set* mset = nfa_move(ds, c);
			nfa_set_e_closure(mset, NULL);
			
			if(VEC_LEN(&mset->set)) {
				printf("    pushing set (%d)\n", (int)VEC_LEN(&mset->set));
				VEC_PUSH(&dfa_states, mset);
			}
		}
		
		if(dsi > 10) break;
	}
	
	printf("\n--constructing edges-----\n");
	// construct the dfa_state edges
	VEC_EACH(&dfa_states, dsi, ds) { // dfa_state*/nfa_state_set* ds
		printf("dfa loop %d\n", (int)dsi);
		// collect all the edges from all the nfa states
		VEC_EACH(&ds->set, sti, st) { // nfa_state* st
			printf("  nfa_state: %p\n", st);
			for(int i = 0; i < 2; i++) {
				dfa_state* ds_target = NULL;
				
				if(st->out[i] == NULL || st->out[i] == &terminal_state) continue;
				
				// find which dfa_state this state is in
				VEC_EACH(&dfa_states, dsi2, ds2) {
					VEC_EACH(&ds2->set, sti2, st2) { // nfa_state* st
						if(st->out[i] == st2) {
							ds_target = ds2;
							goto FOUND;
						}
					}
				}
				
				printf("   ERROR: nfa state not found %p\n", st->out[i]);
				
			FOUND:
				// add the edge
				VEC_PUSH(&ds->edges, ((dfa_edge){st->out[i]->c, ds_target}));
			}
		}
		
	}
	
	
	printf("dfa size: %d\n", (int)VEC_LEN(&dfa_states));
	
	
	// minimization
	
// 	VEC(dfa) final_dfas;
// 	VEC(dfa) nonfinal_dfas;
// 	VEC_INIT(&final_dfas);
// 	VEC_INIT(&nonfinal_dfas);
	
	
	
}







static void nfa_to_table(nfa_state* start); 





void re_parse(char* source) {
	
	re_parse_state ps;
	ps.s = source;
	ps.token = TOK_CAT_AUTO;
	ps.c = 0;
	VEC_INIT(&ps.op_stack);
	VEC_INIT(&ps.val_stack);
	
	int op = 0;
	
	while(next_token(&ps)) {
		
// 		if(ps.token == TOK_NONE) printf(" token: %s '%c'\n", token_names[ps.token], ps.c);
// 		else printf(" token: %s \n", token_names[ps.token]);
// 		continue;
		
 		printf("\n+++++++++++\ntoken: %d '%c'\n", ps.token, ps.c);
 		print_op_stack(&ps, 1);
		
		if(ps.token == TOK_NONE) {
			printf("pushing char: %c\n", ps.c);
			push_val(&ps, frag_char(ps.c));
			
// 			// bootstrap the first character
// 			if(1 == VEC_LEN(&ps.val_stack)) {
// 				printf("EARLY EXIT *******************\n");
// 				continue;
// 			}
			continue;
		}
		
		
		while(1) {
			int prec = token_precedence[ps.token];
			int top = top_prec(&ps);
			if(top > prec) {
				run_op(&ps, pop_op(&ps));
				continue;
			}
			
			printf("push %d %d\n", (int)VEC_LEN(&ps.val_stack), (int)VEC_LEN(&ps.op_stack));
			if(token_arity[ps.token] == 1) run_op(&ps, ps.token);
			else push_op(&ps, ps.token);
			break;
		}
	}
	
	int t;
	
// 	t = pop_op(&ps);
// 	if(t != TOK_CAT_AUTO) {
// 		push_op(&ps, t);
// 	}
// 	
	printf("\n\ndone with loop\n");
	printf("done %d %d\n", (int)VEC_LEN(&ps.val_stack), (int)VEC_LEN(&ps.op_stack));
	print_op_stack(&ps, 1);
	printf("--------------\n");
	print_val_stack(&ps, 1);
	printf("--------------\n");
	
	// empty out the operator queue
	
	while(t = pop_op(&ps)) {
		// an extra default cat operator is sometimes left on the bottom of the stack
// 		if(t == TOK_CAT && VEC_LEN(&ps.val_stack) < 2) break;
		
		run_op(&ps, t);
	}

	
	printf("*******************\n");
	
	if(VEC_LEN(&ps.val_stack) > 1) {
			printf("extra values left on stack\n");
			*((int*)0) = 1;
	}
	
	nfa_frag* f = VEC_HEAD(&ps.val_stack);
	
	// patch the list to match state
	patch_frag_list(f, &terminal_state);
	
	print_frag(f, 2);
	
	nfa_to_table(f->start);
	
	return;
	
	nfa_to_dfa(f->start);
	
}


typedef struct nfa_table_edge {
	int start;
	int c;
	int dest;
	
	char is_start;
	char is_terminal;
	
	int dfa_state;
} nfa_table_edge;



static void nfa_to_table(nfa_state* start) {
	
	
	
	
	VEC(nfa_table_edge) table;
	VEC(nfa_state*) lookup;
	VEC_INIT(&table);
	VEC_INIT(&lookup);
	
	// thanks, gcc
	int find_state_index(nfa_state* state) {
		VEC_EACH(&lookup, sti, st) {
			if(st == state) return sti;
		}
		VEC_PUSH(&lookup, state);
		return VEC_LEN(&lookup) - 1;
	}
	
	// returns 1 if there was an insertion, 0 if the state is duplicate
	int insert_edge(nfa_state* _start, int c, nfa_state* dest) {
		int start_i = find_state_index(_start); 
		int dest_i = find_state_index(dest); 
		VEC_LOOP(&table, ei) {
			nfa_table_edge* e = &VEC_ITEM(&table, ei);
			if(e->start == start_i && e->dest == dest_i && e->c == c) return 0;
		}
		
		VEC_PUSH(&table, ((nfa_table_edge){
			start_i, c, dest_i,
			dest == start,
			dest == &terminal_state,
		}));
		return 1;
	}
	
	
	VEC(nfa_state*) visited;
	VEC(nfa_state*) stack;
	VEC_INIT(&visited);
	VEC_INIT(&stack);
	
	int has_visited(nfa_state* st) {
		VEC_EACH(&visited, vi, v) {
			if(v == st) return 1;
		}
		return 0;
	}
	
	
	// the start state is implicit
	// push it first
	insert_edge(NULL, start->c, start);
	VEC_PUSH(&stack, start);
	VEC_PUSH(&lookup, &terminal_state);
	
	
	
	VEC_EACH(&stack, si, s) {
		VEC_PUSH(&visited, s);
		
		for(int i = 0; i < 2; i++) {
			if(!s->out[i]) continue;
			insert_edge(s, s->out[i]->c, s->out[i]);
			
			if(!has_visited(s->out[i])) {
				VEC_PUSH(&stack, s->out[i]);
			}
		}
		
		
	}
	
	
	VEC_LOOP(&table, ei) {
		nfa_table_edge* e = &VEC_ITEM(&table, ei);
		
		if(e->c == NFA_SPLIT) {
			printf(" %d\t|  -e-\t  |  %d ", e->start, e->dest);
		}
		else {
			printf(" %d\t|  %c\t  |  %d ", e->start, e->c, e->dest);
		}
		
		printf("\t\t%d %d\n", e->is_start, e->is_terminal);
	}
	
	printf("----------------------------------------------\n");
	
	
	
	// should be mroe like vec(struct { int ds, ns; })
	
	typedef struct dfa_edge {
		int start;
		int c;
		int dest;
	} dfa_edge;

	typedef struct dfa_set {
		int dfa_state;
		int nfa_state;
	} dfa_set;
	
	typedef struct dfa_state_info {
		int state_num;
		int renamed_to;
		
		VEC(int) nfa_states;
	} dfa_state_info;
	
	int next_dfa_state = 0;
	VEC(dfa_edge) dtable; 
	VEC_INIT(&dtable);

	VEC(dfa_set) dsets; 
	VEC_INIT(&dsets);
	
	VEC(dfa_state_info*) dfainfo;
	VEC_INIT(&dfainfo);
	
	
	// returns the number of states added
	int add_dfa_set_state(int _n, dfa_state_info* dst) {
		printf("         pushing %d\n", _n);
		VEC_EACH(&dst->nfa_states, ni, n) {
			if(n == _n) return 0;
		}
		VEC_PUSH(&dst->nfa_states, _n);
		return 1;
	} 
	
	// walk all the epison edges and add them to the dfa table
	int e_closure(int start_n, dfa_state_info* dst) {
		printf("closing %d\n", start_n);
		
		int added = add_dfa_set_state(start_n, dst);
		
		VEC_LOOP(&table, ei) {
			nfa_table_edge* e = &VEC_ITEM(&table, ei);
			if(e->start != start_n) continue;
			if(e->c != NFA_SPLIT) continue;
			
			added += e_closure(e->dest, dst);
		}
		
		printf("closed %d states\n", added);
		return added;
	}
	
	// grow a dfa set for  certain character
	// returns the number of edges added
	int move(dfa_state_info* dst, int c, dfa_state_info* out) {
		int added = 0;
		
		// only loop to the current end
		int len = VEC_LEN(&dst->nfa_states);
		
		for(int i = 0; i < len; i++) {
			int n_state = VEC_ITEM(&dst->nfa_states, i);
			printf("     trying nfa_state %d\n", n_state);
			
			VEC_LOOP(&table, ei) {
				nfa_table_edge* e = &VEC_ITEM(&table, ei);
				if(e->start != n_state) continue;
				if(e->c != c) continue;
				// only edges from n_state--c-->
				
				printf("      found edge to %d\n", e->dest);
				
				// add the edge
				add_dfa_set_state(e->dest, out);
				added++;
				
				// e-close the edge
				added += e_closure(e->dest , out);
			}
		}
		
		return added;
	}
	
	
	void add_dfa_edge(int start, int c, int dest) {
		VEC_PUSH(&dtable, ((dfa_edge){start, c, dest}));
	}
	
	dfa_state_info* new_dfa_state() {
		int n = VEC_LEN(&dfainfo);
		dfa_state_info* s = calloc(1, sizeof(*s));
		s->state_num = n;
		
		VEC_PUSH(&dfainfo, n);
		return s;
	}
	
	VEC(dfa_state_info*) dstack;
	VEC_INIT(&dstack);
	
	// e-close the start state
	dfa_state_info* one = new_dfa_state(); 
	e_closure(0, one); // 0 is the start state
	
	VEC_PUSH(&dstack, one);
	
	typedef VEC(int) charset;
	
	charset chars;
	VEC_INIT(&chars);
	
	void add_char(charset* set, int c) {
		VEC_EACH(set, si, sc) {
			if(c == sc) return;
		}
		VEC_PUSH(set, c);
	}
	
	void add_all_chars(dfa_state_info* dst, charset* set) {
		VEC_EACH(&dst->nfa_states, nsti, nst) { // each nfa state
			VEC_LOOP(&table, ti) { // each edge of the state
				nfa_table_edge* ne = &VEC_ITEM(&table, ti);
				if(ne->start != nst) continue;
				if(ne->c == NFA_SPLIT) continue; // only named edges
				
				add_char(set, ne->c);
			}
		}
	}
	
	
	int compare_dfa_state(dfa_state_info* a, dfa_state_info* b) {
		if(a->state_num == b->state_num) return 0;
		if(VEC_LEN(&a->nfa_states) != VEC_LEN(&b->nfa_states)) return 1;
		
		VEC_EACH(&a->nfa_states, ai, as) {
			VEC_EACH(&b->nfa_states, bi, bs) {
				if(as == bs) goto FOUND;
			}
			return 1;
			
		FOUND:
			(void)0;
		}
		
		return 0;
	}
	
	dfa_state_info* dfa_state_exists(dfa_state_info* s) {
		VEC_EACH(&dstack, dsi, ds) {
			if(0 == compare_dfa_state(s, ds)) {
				return ds;
			}
		}
		return NULL;
	}
	
	
	printf("$$ starting dfa conversion $$\n");
	// stack of new, unprocessed dfa states
	// states are added after e-closure but before move
	VEC_EACH(&dstack, dsi, ds) {
// 		printf("-- %d %p\n", dsi, ds); 
		// get a unique set of char edges in the dfa set
		VEC_TRUNC(&chars);
		add_all_chars(ds, &chars);
	
		printf("-- %d %p  (%d chars [", dsi, ds, (int)VEC_LEN(&chars)); 
		VEC_EACH(&chars, ci, c) printf("%c {%d}, ", c, c);
		printf("])\n");
		
		
		
		// for each unique char
		VEC_EACH(&chars, ci, c) {
			printf("  char: %c\n", c);
			
			dfa_state_info* dst2 = new_dfa_state(); 
			
			// move also e-closes the states it adds
			move(ds, c, dst2);
			
			// TODO: only add unique states
			if(VEC_LEN(&dst2->nfa_states)) {
				dfa_state_info* dup;
				if((dup = dfa_state_exists(dst2))) {
					printf("     duplicate state\n");
					
					add_dfa_edge(ds->state_num, c, dup->state_num);
				}
				else {
					printf("    %d new states\n", (int)VEC_LEN(&dst2->nfa_states));
					VEC_PUSH(&dstack, dst2);
					add_dfa_edge(ds->state_num, c, dst2->state_num);
				}
			}
			else { // the set is empty
				printf("    no new states.\n"); 
				VEC_FREE(&dst2->nfa_states);
				free(dst2);
				VEC_LEN(&dfainfo)--;
			}
			
			// TODO: edges
// 			
		}
	}
	
	
	
	// print
	VEC_LOOP(&dtable, ei) {
		dfa_edge* e = &VEC_ITEM(&dtable, ei);
		
		printf("%d\t  '%c' ", e->start, e->c);
		printf("%d\t ", e->dest);
		
		printf("\n");
		
	}
	printf("-dstack------------------\n");
	VEC_LOOP(&dstack, ei) {
		dfa_state_info* e = VEC_ITEM(&dstack, ei);
		
		printf("%d\t (%d states) ", e->state_num, (int)VEC_LEN(&e->nfa_states));
		printf("%d\t ", e->renamed_to);
		printf("\n");
		
		VEC_EACH(&e->nfa_states, nsi, ns) {
			printf("         %d\n", ns);
		}
		

		
	}
// 	printf("-dfainfo------------------\n");
// 	VEC_LOOP(&dfainfo, ei) {
// 		dfa_state_info* e = &VEC_ITEM(&dfainfo, ei);
// 		
// 		printf("%d\t (%d states) ", e->state_num, (int)VEC_LEN(&e->nfa_states));
// 		printf("%d\t ", e->renamed_to);
// 		
// 		printf("\n");
// 		
// 	}
	printf("-------------------\n");
	VEC_LOOP(&dsets, ei) {
		dfa_set* e = &VEC_ITEM(&dsets, ei);
		
		printf("%d ) ", e->dfa_state);
		printf("%d\t ", e->nfa_state);
		
		printf("\n");
		
	}
	
	
	char* input = "df";
	int len = strlen(input);
	
	int curstate = 0;
	int i = 0;
	
	for(; i < len; i++) {
		char c = input[i];
		printf("c: %c, i: %d\n", c, i);
		
		VEC_EACH(&dtable, dei, de) {
			if(de.start != curstate) continue;
			if(de.c != c) continue;
			
			curstate = de.dest;
			printf(" matched %c, moving to %d\n", de.c, de.dest); 
			goto NEXT;
		}
		
		// failed;
		printf("failed\n");
		return;
	
	NEXT:
		(void)0;
		printf("next\n");
	}
	
	printf("matched\n");
	
	
}


