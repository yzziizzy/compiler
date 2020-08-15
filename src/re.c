#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


#include "re.h"




// internals 

static nfa_state terminal_state = {};



static void pnfa(nfa_state* n) {
	char buf[4];
	char* s;
	
	if(!n) {
		printf("nfa: (nil)\n");
		return;
	}
	
	if(n == &terminal_state) {
		printf("nfa: --terminal--\n");
		return;
	}
	
	if(n->c == NFA_SPLIT) { s = "SPLIT"; }
	else if(n->c == NFA_MATCH) { s = "NFA_MATCH"; }
	else if(n->c == NFA_E) { s = "OP_E"; }
	else if(n->c == NFA_OP_CAT) { s = "OP_CAT"; }
	else if(n->c == NFA_ANY) { s = "ANY"; }
	else {
		buf[0] = n->c;
		buf[1] = 0;
		s = buf;
	}
	
	char b1[48];
	char b2[48];
	sprintf(b1, "%p", n->out[0]);
	sprintf(b2, "%p", n->out[1]);
	char* p1, *p2;
	p1 = n->out[0] == &terminal_state ? "--terminal--" : b1; 
	p2 = n->out[1] == &terminal_state ? "--terminal--" : b2; 
	
	printf("nfa: %p (%s) [%s, %s]\n", n, s, p1, p2);
}


static void pnfa_deep(nfa_state* n, int d) {
	if(d <= 0) return;
	if(n == &terminal_state) return;
	
	pnfa(n);
	if(!n) return;
	
	if(n->out[0]) pnfa_deep(n->out[0], d - 1);
	if(n->out[1]) pnfa_deep(n->out[1], d - 1);
}



static int is_in_out_list(nfa_frag* f, nfa_state** st) {
	// go to the end of a
	union frag_out* fo = f->out.next;
	while(fo->next) {
		if(fo->pstate == st) return 1;
		fo = fo->next;
	}
	
	return 0;
}

static void print_out_list(nfa_frag* f) {
	// go to the end of a
	union frag_out* fo = &f->out;
	while(fo) {
		printf(" %p\n", fo);
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
	printf("%*sF-> %p, start: %p \n", indent, " ", f, f->start);
	
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
	
// 	print_frag(f, 4 );
	
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
	TOK_NONE = 2000000,
	TOK_CAT,
	TOK_CAT_AUTO,
	TOK_ALT,
	TOK_STAR,
	TOK_PLUS,
	TOK_ANY,
	TOK_OPT,
	TOK_GRP_OP,
	TOK_GRP_CL,
	TOK_CS_OP,
	TOK_CS_CL,
	TOK_REP_OP,
	TOK_REP_CL,
	
	// character sets
	TOK_CC_WS, // whitespace
	TOK_CC_I_WS, // inverse whitespace
	TOK_CC_WORDCHAR,
	TOK_CC_I_WORDCHAR,
	TOK_CC_DIGIT,
	TOK_CC_I_DIGIT,
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
	[TOK_CS_OP] = "TOK_CS_OP",
	[TOK_CS_CL] = "TOK_CS_CL",
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
	[TOK_GRP_CL] = -2,
	[TOK_CS_OP] = -1,
	[TOK_CS_CL] = -2,
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
	[TOK_GRP_OP] = 2,
	[TOK_GRP_CL] = 2,
	[TOK_CS_OP] = 2,
	[TOK_CS_CL] = 2,
	
	[TOK_CC_WS] = 0,
	[TOK_CC_I_WS] = 0,
	[TOK_CC_WORDCHAR] = 0,
	[TOK_CC_I_WORDCHAR] = 0,
	[TOK_CC_DIGIT] = 0,
	[TOK_CC_I_DIGIT] = 0,
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


int parse_re_token(char** s) {
	
	int type;
	
	switch(**s) {
		case '^': type = TOK_NONE; break; 
		case '$': type = TOK_NONE; break; 
		case '?': 
			type = TOK_OPT;
			break;  
		case '|': 
			type = TOK_ALT;
			break;  
		case '*': 
			type = TOK_STAR;
			break;  
		case '+': 
			type = TOK_PLUS;
			break;  
		case '.': 
			type = TOK_ANY;
			break;  
		case '(': 
			type = TOK_GRP_OP;
			break;  
		case ')': 
			type = TOK_GRP_CL;
			break;
		case '[': 
			type = TOK_CS_OP;
			break;  
		case ']': 
			type = TOK_CS_CL;
			break;
		case '{': 
			type = TOK_REP_OP;
			break;  
		case '}': 
			type = TOK_REP_CL;
			break;
		
		// escape
		case '\\' :
			(*s)++;
			type = TOK_NONE; // cclass
			switch(**s) {
				case 's': break; 
				case 'S': break;
				case 'd': break;
				case 'D': break;
				case 'w': break;
				case 'W': break;
				case 'b': break;
				case 'B': break;
				
				default:
					type = **s; // char literal
					break;
			}
			break;
			
		default:
			type = **s;
	}
	
	(*s)++;
	
	return type;
}


void parse_re_string(char* src) {
	VEC(int) charset;
	
	char* s = src;
	
	int last_token = TOK_NONE;
	int cur_token;
	
	while(*s) {
		int c = parse_re_token(&s);
		cur_token = c;
		
		// characters below TOK_NONE are literals
		if(c >= TOK_NONE) {
			switch(c) {
				case TOK_REP_OP:
					// parse reps
					break;
				case TOK_REP_CL:
					// should never get here
					break;
				case TOK_CS_OP:
					// parse character set
					s++;
					
					
					// invert
					if(*s == '^') {
						s++;
					}
					
					// dash literal
					if(*s == '-') {
						s++;
					}
					
					while(*s) {
						switch(*s)
							case ']': goto DONE;
							case '\\':
								s++;
								switch(*s) {
									case 's': break; 
									case 'S': break;
									case 'd': break;
									case 'D': break;
									case 'w': break;
									case 'W': break;
									case 'b': break;
									case 'B': break;
									default:
										
										break;
								}
								
								break;
						s++;
					}
					DONE:
						
					break;
				case TOK_CS_CL:
					// should never get here
					break;
					
				case TOK_GRP_OP:
					// special
					if(*s == '?') {
						s++;
					} 
					
					break;
				
				case TOK_GRP_CL:
					// should never get here
					break;
					
				default:
					// process operators according to precedence
					break;
			}
		}
	}
}



// returns 0 when done
static int next_token(re_parse_state* ls) {
	
	int nc = peek_char(ls->s);
	int nt = classify_token(nc);
	
	if(nc == 0) return 0;
	
	if(token_arity[ls->token] != 2) { 
		if(token_arity[nt] == 0) { 
			// output an auto cat
			printf("emitting CAT_AUTO %s:%d, %s:%d\n", 
				   token_names[ls->token],
				   token_arity[ls->token], 
			token_names[nt],   
		  token_arity[nt]);
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
	printf("emitting %s\n", token_names[ls->token]);
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
// 	printf("pushing %s onto op stack \n", token_names[t]);
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
	
	printf("\n\nrunning op: %s\n", token_names[op]);
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
		case TOK_GRP_OP:
// 			push_op(ps, op);
			break;
		case TOK_GRP_CL:
			printf("CLOSING here ======= \n");
			
			while(1) {
				printf("eating group stack\n");
		print_op_stack(ps, 5);
	print_val_stack(ps, 5);
	printf(".......\n");
				
				
				int op2 = pop_op(ps);
				if(op2 == TOK_GRP_OP) break;
				run_op(ps, op2);
				
// 					continue;
// 				}
				
// 				printf("push %d %d\n", (int)VEC_LEN(&ps.val_stack), (int)VEC_LEN(&ps.op_stack));
// 				if(ps->token == TOK_GRP_OP) break;
// 				printf("tok: %s\n", token_names[ps->token]);
// 				if(token_arity[ps->token] == 1) run_op(ps, ps->token);
// 				else push_op(ps, ps->token);
// 				break;
			}
			
			
// 			f0 = pop_val(ps);
// 			fn = frag_plus(f0);
// 			push_val(ps, fn);
			
			// pop val, wrap, push
			
			break;
		default:
			printf("unknown token\n");
	}
	
// 	if(f0) pnfa(f0->start);
// 	if(f1) pnfa(f1->start);
// 	if(fn) pnfa(fn->start);
// 	printf("+++++\n");
}






// static void nfa_to_table(nfa_state* start); 


void* re_nfa_from_string(char* source) {
	
	re_parse_state ps;
	ps.s = source;
	ps.token = TOK_CAT_AUTO;
	ps.c = 0;
	VEC_INIT(&ps.op_stack);
	VEC_INIT(&ps.val_stack);
	
	int op = 0;
	int N = 0;
	
	while(next_token(&ps)) {
// 		printf("outter loop\n");
		if(N++ > 100) break;
// 		if(ps.token == TOK_NONE) printf(" token: %s '%c'\n", token_names[ps.token], ps.c);
// 		else printf(" token: %s \n", token_names[ps.token]);
// 		continue;
		
//  		printf("\n+++++++++++\ntoken: %d '%c'\n", ps.token, ps.c);
//  		print_op_stack(&ps, 1);
		
		if(ps.token == TOK_ANY) {
			push_val(&ps, frag_char(11000));
			continue;
		}
		else if(ps.token == TOK_NONE) {
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
// 			printf("main run loop\n");
			int prec = token_precedence[ps.token];
			if(N++ > 100) break;
			
			// group openings and closings
			if(prec == -1) {
				printf("pushing group open\n");
				push_op(&ps, ps.token);
				break;
			}
			if(prec == -2) {
				run_op(&ps, ps.token);
				break;
			}
			
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
	/*
	printf("\n\ndone with loop\n");
	printf("done %d %d\n", (int)VEC_LEN(&ps.val_stack), (int)VEC_LEN(&ps.op_stack));
	print_op_stack(&ps, 1);
	printf("--------------\n");
	print_val_stack(&ps, 1);
	printf("--------------\n");
	*/
	// empty out the operator queue
	
	while(t = pop_op(&ps)) {
		// an extra default cat operator is sometimes left on the bottom of the stack
// 		if(t == TOK_CAT && VEC_LEN(&ps.val_stack) < 2) break;
		
		run_op(&ps, t);
	}

	
// 	printf("*******************\n");
	
	if(VEC_LEN(&ps.val_stack) > 1) {
			printf("extra values left on stack\n");
			*((int*)0) = 1; // die
	}
	
	nfa_frag* f = VEC_HEAD(&ps.val_stack);
	
// 	print_out_list(f);
	patch_frag_list(f, &terminal_state);
// 	printf("terminal: %p\n", &terminal_state);
// 	print_frag(f, 2);
	
	/*
	// patch the list to match state
	patch_frag_list(f, &terminal_state);
	
	print_frag(f, 2);
	
	nfa_to_table(f->start);
	*/
	
	VEC_FREE(&ps.op_stack);
	VEC_FREE(&ps.val_stack);
	
// 	pnfa_deep(f->start, 4);
// 	printf("---------\n");
	
	return f; // nfa_frag
}





    ////////////////////////
   //                    //
  //   DFA Processing   //
 //                    //
////////////////////////





// ??
void re_mark_terminal(void* _f) {
	nfa_frag* f = _f;
	
	patch_frag_list(f, &terminal_state);
}

// ??
void re_tag(void* _f, int tag) {
	nfa_frag* f = _f;
	f->tag = tag;
}


nfa_state_set* new_nfa_state_set() {
	nfa_state_set* n = calloc(1, sizeof(*n));
	return n;
}

void nfa_state_set_free(nfa_state_set* s) {
	PointerSet_destroy(&s->states);
	intSet_destroy(&s->out_chars);
}

void nfa_state_set_union(nfa_state_set* a, nfa_state_set* b) {
	PointerSet_union_inplace(&a->states, &b->states);
	intSet_union_inplace(&a->out_chars, &b->out_chars);
	a->has_terminal |= b->has_terminal;
	a->has_start |= b->has_start;
}


static void pnfass(nfa_state_set* ss) {
	printf("nfass: %p [", ss);
	for(int i = 0; i < ss->states.length; i++) {
		printf("%p,", (intptr_t)ss->states.set[i] & 0xffffff);
	}
	printf("], (");
	for(int i = 0; i < ss->out_chars.length; i++) {
		printf("%d/%c,", ss->out_chars.set[i],ss->out_chars.set[i]);
	}
	printf(")\n");
}



nfa_state_set* nfa_state_e_closure(nfa_state* st) {
	nfa_state_set* set = new_nfa_state_set();
	
	VEC(nfa_state*) stack;
	VEC_INIT(&stack);
	
	VEC_PUSH(&stack, st);
	
	VEC_EACH(&stack, i, cur_st) {
		printf("eloop\n");
		// skip states already in the mess
		if(PointerSet_exists(&set->states, cur_st)) continue;
		printf("eyep\n");
		
		PointerSet_insert(&set->states, cur_st);
		
// 		if(cur_st->c != NFA_SPLIT) {
// 			printf("oc: %d/%c\n", cur_st->c,cur_st->c);
// 			intSet_insert(&set->out_chars, cur_st->c);
// 		}
		
		
// 		pnfa(cur_st);
		
		for(int o = 0; o < 2; o++) {
			if(cur_st->out[o] == NULL) continue;
			if(cur_st->out[o] == &terminal_state) {
				set->has_terminal = 1;
				continue; // yes exit
			}
			
			int oc = cur_st->out[o]->c;
			printf("oc: %d/%c\n", oc, oc);
			
			// save this set for later
			if(oc != NFA_SPLIT) {
				intSet_insert(&set->out_chars, oc);
			}
			
			
			if(oc == NFA_SPLIT) {
				VEC_PUSH(&stack, cur_st->out[o]);
				printf("pusing e-state\n");
			}
		}
		
	}
	
	VEC_FREE(&stack);
	
	return set;
}
/*
nfa_state_set* nfa_state_move(nfa_state* st, int c) {
	nfa_state_set* set = new_nfa_state_set();
// 	set->c = c;

	for(int o = 0; o < 2; o++) {
		if(st->out[o] == NULL) continue;
		
		int oc = st->out[o]->c;
		
		// save this set for later
		if(oc != NFA_SPLIT) {
			intSet_insert(&set->out_chars, oc);
		}
		
		if(oc == c) {
			PointerSet_insert(&set->states, st->out[o]);
		}
	}
	
	return set;
}
*/

// construct a list of all nfa states reachable from the given
//   set of states with transition on character c.
nfa_state_set* nfa_state_set_move(nfa_state_set* set, int c) {
	nfa_state_set* out = new_nfa_state_set();
	
	// all input states 
	for(int i = 0; i < set->states.length; i++) {
		nfa_state* cur_st = set->states.set[i];
		
		// each branch from the input state
		for(int o = 0; o < 2; o++) {
			// a state that can be transitioned to
			nfa_state* t_st = cur_st->out[o];
			
			if(t_st == NULL) continue; // no exit
			if(t_st == &terminal_state) {
				set->has_terminal = 1;
				continue; // yes exit
			}
			/* / save this set for later
			if(t_st->c != NFA_SPLIT) {
				intSet_insert(&out->out_chars, t_st->c);
			}*/
			
			// only ones reachable by c
			if(t_st->c == c) {
				PointerSet_insert(&out->states, t_st);
			}
			printf("  -%d %p ", o, (intptr_t)cur_st->out[o] & 0xffffff); pnfass(out);
			
		}
	}

// 	nfa_state_set_union(out, x);
	
	return out;
}


// construct a list of all nfa states reachable from the given
//   set of states with no input (e-transition)
void nfa_state_set_e_closure(nfa_state_set* set) {
	nfa_state_set* out = new_nfa_state_set();
	
	// all input states 
	for(int i = 0; i < set->states.length; i++) {
		nfa_state* cur_st = set->states.set[i];
		
		nfa_state_set* x = nfa_state_e_closure(cur_st);
		nfa_state_set_union(out, x);
		
		nfa_state_set_free(x);
	}
	
	nfa_state_set_union(set, out);
	nfa_state_set_free(out);
}



int nfa_state_set_cmp(nfa_state_set** a, nfa_state_set** b) {
	if(!*a || !*b) return *a - *b;
	if((*a)->states.length != (*b)->states.length) return (*a)->states.length - (*b)->states.length;
	
	return memcmp((*a)->states.set, (*b)->states.set, (*a)->states.length * sizeof(*(*a)->states.set));
}


void re_compile_nfa_2(re_nfa _n) {
	nfa_state* start = ((nfa_frag*)_n)->start;
	
	if(start->c != NFA_SPLIT) {
		start = new_state(NFA_SPLIT, start, NULL);
	}
	
	// first convert the nfa to a non-minimal dfa
	
	StructSet dfa_states; // each dfa state is itself a set of nfa states
	StructSet_init(&dfa_states, nfa_state_set*, nfa_state_set_cmp);
	
	pnfa_deep(start, 10);
	
	// all the nfa states we can get to from the start state with no input (e-transition)
	nfa_state_set* nss_start = nfa_state_e_closure(start); 
	nss_start->has_start = 1;
	
	VEC(nfa_state_set*) stack; // new, unique, unprocessed dfa states
	VEC_INIT(&stack);
	
	VEC_PUSH(&stack, nss_start);
	
	// process each unprocessed dfa state
	// this stack only grows
	VEC_EACH(&stack, z, s) {
		printf("***************\n");
		printf("input dfa: %p %d %d chars: [", s, s->has_start, s->has_terminal);
		for(int i = 0; i < s->out_chars.length; i++) {
			printf("%d/%c,", s->out_chars.set[i],s->out_chars.set[i]);
		}
		printf("]\n");
 		pnfass(s);
		
		for(int i = 0; i < s->out_chars.length; i++) {
			int c = s->out_chars.set[i];
			
			printf("  ========== oc: %c\n", c);
			nfa_state_set* s2 = nfa_state_set_move(s, c);
			nfa_state_set_e_closure(s2);
			
			
			
			nfa_state_set* exist;
			if(!StructSet_insertGet(&dfa_states, s2, &exist)) {
				// set is new
				printf("new dfa state: ");
 				pnfass(s2);
				
				VEC_PUSH(&s->edges, ((nfa_state_set_edge){c, s2}));
				
				VEC_PUSH(&stack, s2);
			}
			else {
				VEC_PUSH(&s->edges, ((nfa_state_set_edge){c, exist}));
			}
		}
	}
	
	
	printf("\n..............\n");
	VEC_EACH(&stack, z, s) {
		printf("  interim dfa: %p, %s [", 
			   shp(s), 
			   s->has_start ? (s->has_terminal ? "B" : "S") : (s->has_terminal ? "T" : " "));
		
		VEC_EACH(&s->edges, zz, e) {
			printf("%c->%p, ", e.c, shp(e.target));
		}
		printf("]\n");
	}
	printf("\n..............\n");
	
	
	// the dfa is fully constructed at this point
	// minimization is the next step
	
	
	// TODO: minimize
	
	
	// convert the minimal dfa into a nice table for the regex matcher
	VEC(re_table1) table;
	VEC_INIT(&table);
	
	VEC(int) state_pos;
	VEC_INIT(&state_pos);
	
	// give each state an ID
	VEC_EACH(&stack, z, s) {
		s->stateIndex = z;
	}
	
	VEC_EACH(&stack, z, s) {
		// keep track of where this state was inserted so we can fix from the ID later
		VEC_PUSH(&state_pos, VEC_LEN(&table));
		
		VEC_EACH(&s->edges, zz, e) {
			if(e.target->has_terminal) {
				VEC_PUSH(&table, ((re_table1){e.c, INT_MAX - 1}));
			}
			else {
				VEC_PUSH(&table, ((re_table1){e.c, e.target->stateIndex}));
			}
		}
		
		// state terminator
		if(VEC_TAIL(&table).next != INT_MAX) { // suppress duplicates
			VEC_PUSH(&table, ((re_table1){' ', INT_MAX}));
		}
	}
	
	// just in case
	if(VEC_TAIL(&table).next != INT_MAX) {
		VEC_PUSH(&table, ((re_table1){' ', INT_MAX}));
	}
	
	// change all the state ID's to the cached table indices
	VEC_EACH(&table, z, t) {
		if(t.next < INT_MAX - 100) t.next = VEC_ITEM(&state_pos, t.next);
		printf("%d, {'%c', %d},\n", z, t.c, t.next);
	}
	
	VEC_FREE(&state_pos);
	
	
	// TODO: lots of cleanup
}




int re_match(void* regex, char* str) {
	
	
	struct {
		int base;
		int c;
		int next;
	} table[] = {
		{0, ' ', 2}, // start marker
		{1, ' ', 0}, // terminal state
		{2, 'a', 3},
		{3, 'b', 4},
		{4, 'c', 1},
		{0, ' ', 0}, // list terminator
	};
	
	int base = table[0].next;
	int ind = table[0].next;
	
	
	for(int i = 0; str[i]; i++) {
		while(base == table[ind].base) {
			if(table[ind].c == str[i]) {
				base = table[ind].next;
				ind = base;
				
				if(ind == 1) {
					goto TERMINAL;
				}
				
				goto NEXT;
			}
			else {
				ind++;
			}
		}
		
		printf("no match\n");
		return 1;
		
	NEXT:
		continue;
	}
	
	
	printf("ended\n");
	return 1;
	
TERMINAL:
	printf("matched\n");
	return 0;
}



int re_match2(void* regex, char* str) {
	
	
	struct {
		int c;
		int next;
	} table[] = {
		{'a', 2},
		{'-', INT_MAX},
		{'b', 4},
		{'-', INT_MAX},
		{'c', INT_MAX - 1},
		{'-', INT_MAX},
	};
	
	int ind = 0;
	
	for(int i = 0; str[i]; i++) {
		while(table[ind].next != INT_MAX) {
			if(table[ind].c == str[i]) {
				ind = table[ind].next;
				
				if(ind == INT_MAX - 1) {
					goto TERMINAL;
				}
				
				goto NEXT;
			}
			else {
				ind++;
			}
		}
		
		printf("no match\n");
		return 1;
		
	NEXT:
		continue;
	}
	
	
	printf("ended\n");
	return 1;
	
TERMINAL:
	printf("matched\n");
	return 0;
}








/*

// convert an nfa graph to a transition table
re_table re_compile_nfa(re_nfa _n) {
// static void nfa_to_table(nfa_state* start) {
	
	
	nfa_state* start = ((nfa_frag*)_n)->start;
	
	// create a transition table from the nfa chains
	
	VEC(nfa_table_edge) table;
	VEC(nfa_state*) lookup;
	VEC_INIT(&table);
	VEC_INIT(&lookup);
	
	PointerSet* visited = PointerSet_alloc();
	VEC(nfa_state*) stack;
	VEC_INIT(&stack);
	
	
	// thanks, gcc
	int find_state_index(nfa_state* state) {
		int i = VEC_INDEXOF(&lookup, state);
		if(i >= 0) return i; 
		
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
		
	
	// the start state is implicit
	// push it first
	insert_edge(NULL, start->c, start);
	VEC_PUSH(&stack, start);
	VEC_PUSH(&lookup, &terminal_state);
	
	VEC_EACH(&stack, si, s) {
		PointerSet_insert(visited, s);
		
		for(int i = 0; i < 2; i++) {
			if(!s->out[i]) continue;
			insert_edge(s, s->out[i]->c, s->out[i]);
			
			if(!PointerSet_exists(visited, s->out[i])) {
				VEC_PUSH(&stack, s->out[i]);
			}
		}
		
		
	}
	
	// should be here?
	PointerSet_free(visited);
	
	/*
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
	* /
	
	
	
	// create a dfa from the nfa state table
	
	
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
		
		// TODO: cache terminal state index
		nfa_state* s = VEC_ITEM(&lookup, _n); 
		if(!s) return 1;
		if(s->out[0] == &terminal_state || s->out[1] == &terminal_state) {
			dst->is_terminal = 1;
		}
		return 1;
	} 
	
	// walk all the epsilon edges and add them to the dfa table
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
		
		VEC_PUSH(&dfainfo, s);
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
	
		printf("-- %ld %p  (%d chars [", dsi, ds, (int)VEC_LEN(&chars)); 
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
			
		}
	}
	
	
	// dfa minimization
	// TODO:
	
	
	
	
	
	
	
/*
void re_dfa_match(re_table _d, char* input) {
	
	dfa_table* dtable = _d;
	
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
			if(VEC_ITEM(&dfainfo, curstate)->is_terminal) {
				printf("found terminal state %d\n", de.start); 
				goto MATCHED;
			}
			goto NEXT;
		}
		
		// failed;
		printf("failed\n");
		return;
	
	NEXT:
		(void)0;
		printf("next\n");
	}
	
MATCHED:
	
	printf("matched\n");
	
}
	
	
*/
	
	
	
	/*
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
		printf("%d\t ", e->is_terminal);
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
	*/
	
// }





