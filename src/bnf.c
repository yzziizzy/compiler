#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


#include "bnf.h"




enum lex_token_type {
	LTT_NONE = 0, 
	LTT_DEF, // =
	LTT_TERM, // ;
	LTT_ALT, // |
	LTT_CAT, // ,
	LTT_OPT_OP, // [
	LTT_OPT_CL, // ]
	LTT_REP_OP, // {
	LTT_REP_CL, // }
	LTT_GRP_OP, // (
	LTT_GRP_CL, // )
	LTT_STR, // <quoted string>
	LTT_RULE, // <string>
	LTT_REGEX, // /slashed regex string/
};

static char token_precedence[] = {
	[LTT_NONE] = 0, // 0 means not an operator 
	[LTT_DEF] = 0, 
	[LTT_TERM] = 0, 
	[LTT_ALT] = 5, 
	[LTT_CAT] = 6, 
	[LTT_OPT_OP] = -1, 
	[LTT_OPT_CL] = -2, 
	[LTT_REP_OP] = -1, 
	[LTT_REP_CL] = -2, 
	[LTT_GRP_OP] = -1, 
	[LTT_GRP_CL] = -2, 
	[LTT_STR] = 0, 
	[LTT_RULE] = 0, 
	[LTT_REGEX] = 0, 
};

static char* token_names[] = {
	[LTT_NONE] = "LTT_NONE",   
	[LTT_DEF] = "LTT_DEF",  
	[LTT_TERM] = "LTT_TERM",  
	[LTT_ALT] = "LTT_ALT",  
	[LTT_CAT] = "LTT_CAT",  
	[LTT_OPT_OP] = "LTT_OPT_OP",  
	[LTT_OPT_CL] = "LTT_OPT_CL",  
	[LTT_REP_OP] = "LTT_REP_OP",  
	[LTT_REP_CL] = "LTT_REP_CL",  
	[LTT_GRP_OP] = "LTT_GRP_OP",  
	[LTT_GRP_CL] = "LTT_GRP_CL",  
	[LTT_STR] = "LTT_STR",  
	[LTT_RULE] = "LTT_RULE",  
	[LTT_REGEX] = "LTT_REGEX",  
};


typedef struct bnf_lex_token {
	enum lex_token_type type;
	char* str;
	int line_num;
	int char_num;
} bnf_lex_token;

typedef struct bnf_lex_ctx {
	VEC(bnf_lex_token) tokens;
	
	char* s;
	int current_line;
	int current_char;
	char* error_msg;
	
	char finished;
} bnf_lex_ctx;


typedef struct parse_ctx {
	
	VEC(bnf_lex_token) tokens;
	size_t cur_token;
	VEC(bnf_rule*) rules;
	
	VEC(bnf_exp*) val_stack;
	VEC(bnf_lex_token*) op_stack;
	
	char* error_msg;
	char finished;
} parse_ctx;


void print_val_stack(parse_ctx* ctx, int indent);
void print_op_stack(parse_ctx* ctx, int indent);
//
// String Functions
//





//
// Internal Utilities
//

static bnf_exp* new_exp(enum bnf_exp_type type) {
	bnf_exp* e = malloc(sizeof(*e));
	
	VEC_INIT(&e->kids);
	e->content = NULL;
	e->type = type;
	
	return e;
}
static bnf_rule* new_rule(char* name) {
	bnf_rule* r = calloc(1, sizeof(*r));
	r->name = name;
	return r;
}

static bnf_rule* add_rule(parse_ctx* ctx, char* name) {
	bnf_rule* rule;
	
	VEC_EACH(&ctx->rules, ri, r) {
		if(0 == strcmp(r->name, name)) {
			return r;
		}
	}
	
	rule = new_rule(name);
	VEC_PUSH(&ctx->rules, rule);
	
	return rule;
}


//
// Lexxing
//

// TODO: skip comments too
static void lex_skip_space(bnf_lex_ctx* lctx) {
	while(1) {
		char c = lctx->s[0];
		if(c == 0) {
			lctx->finished = 1;
			return;
		}
		if(!isspace(c)) return;
		
		if(c == '\n') lctx->current_line++;
		lctx->s++;
	}
} 

static void lex_push(bnf_lex_ctx* lctx, enum lex_token_type type, char* str) {
	VEC_PUSH(&lctx->tokens, ((bnf_lex_token){type, str}));
}

static void lex_push_string(bnf_lex_ctx* lctx) {
	char qc = lctx->s[0];
	size_t l = 1;
	
	for(; lctx->s[l] > 0; l++) {
		if(lctx->s[l] == qc && lctx->s[l-1] != '\\') break;
	}
	
	// TODO: check EOF
	
	char* str = strndup(lctx->s + 1, l - 1);
// 	printf("string: '%s'\n", str);
	lex_push(lctx, LTT_STR, str);
	
	lctx->s += l + 1;
}

static void lex_push_regex(bnf_lex_ctx* lctx) {
	char qc = '/';
	size_t l = 1;
	
	for(; lctx->s[l] > 0; l++) {
		if(lctx->s[l] == qc && lctx->s[l-1] != '\\') break;
	}
	
	// TODO: check EOF
	
	char* str = strndup(lctx->s + 1, l - 1);
// 	printf("string: '%s'\n", str);
	lex_push(lctx, LTT_REGEX, str);
	
	lctx->s += l + 1;
}

static void lex_push_rule(bnf_lex_ctx* lctx) {
	char* ruleChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_";
	
	// TODO: check EOF
	size_t l = strspn(lctx->s, ruleChars);
	
	lex_push(lctx, LTT_RULE, strndup(lctx->s, l));
	
	lctx->s += l;
}

static void lex_get_token(bnf_lex_ctx* lctx) {
	char c = lctx->s[0];
	switch(c) {
		case '=': lex_push(lctx, LTT_DEF, NULL); lctx->s++; break;
		case ',': lex_push(lctx, LTT_CAT, NULL); lctx->s++; break;
		case '|': lex_push(lctx, LTT_ALT, NULL); lctx->s++; break;
		case ';': lex_push(lctx, LTT_TERM, NULL); lctx->s++; break;
		case '[': lex_push(lctx, LTT_OPT_OP, NULL); lctx->s++; break;
		case ']': lex_push(lctx, LTT_OPT_CL, NULL); lctx->s++; break;
		case '{': lex_push(lctx, LTT_REP_OP, NULL); lctx->s++; break;
		case '}': lex_push(lctx, LTT_REP_CL, NULL); lctx->s++; break;
		case '(': lex_push(lctx, LTT_GRP_OP, NULL); lctx->s++; break;
		case ')': lex_push(lctx, LTT_GRP_CL, NULL); lctx->s++; break;
// 		case '/': //coments
		case '\'':
		case '"':
			lex_push_string(lctx);
			break;
		case '/':
			lex_push_regex(lctx);
			break;
		default:
			lex_push_rule(lctx);
			break;
	}
}

static void lex_run(bnf_lex_ctx* lctx) {
	while(lctx->s[0]) {
		lex_skip_space(lctx);
		if(lctx->finished) return;
		
		lex_get_token(lctx);
	}
} 


//
// Internal Parsing Functions
//

static bnf_lex_token* next_token(parse_ctx* ctx) {
	if(ctx->cur_token >= VEC_LEN(&ctx->tokens)) return NULL;
	bnf_lex_token* t = &VEC_ITEM(&ctx->tokens, ctx->cur_token); 
// 	printf("\ngrabbed token: %s ", token_names[t->type]);
// 	if(t->type == LTT_RULE || t->type == LTT_STR) {
// 		printf("'%s'", t->str);
// 	}
// 	printf("\n");
	ctx->cur_token++;
	return t;
}

static void parse_error(parse_ctx* ctx, char* msg) {
	ctx->error_msg = msg;
	ctx->finished = 1;
} 


static void push_op(parse_ctx* ctx, bnf_lex_token* t) {
	VEC_PUSH(&ctx->op_stack, t);
}
static bnf_lex_token* pop_op(parse_ctx* ctx) {
	bnf_lex_token* t = 0;
	if(VEC_LEN(&ctx->op_stack) == 0) return NULL;
	VEC_POP(&ctx->op_stack, t);
// 	printf("popping op %p\n", t);
	return t;
}
static void push_val(parse_ctx* ctx, bnf_exp* t) {
	VEC_PUSH(&ctx->val_stack, t);
}
static bnf_exp* pop_val(parse_ctx* ctx) {
	bnf_exp* t;
	if(VEC_LEN(&ctx->val_stack) == 0) return NULL;
	VEC_POP(&ctx->val_stack, t);
	return t;
}


static void run_op(parse_ctx* ctx, bnf_lex_token* t) {
	bnf_exp* e0;
	bnf_exp* e1;
	bnf_exp* en;
	
	bnf_lex_token* t2;
	
	switch(t->type) {
		case LTT_CAT:
// 			print_val_stack(ctx, 4);
			
			e1 = pop_val(ctx);
			e0 = pop_val(ctx);
// 			print_val_stack(ctx, 5);
			// add the next item into the previous CAT
			if(e1->type == BNF_EXP_CAT) {
				VEC_PREPEND(&e1->kids, e0);
				push_val(ctx, e1);
// 				print_val_stack(ctx, 6);
				return;
			}
			
			en = new_exp(BNF_EXP_CAT);
			VEC_PUSH(&en->kids, e0);
			VEC_PUSH(&en->kids, e1);
			push_val(ctx, en);
// 			print_val_stack(ctx, 7);
			return;
		case LTT_ALT:
			e1 = pop_val(ctx);
			e0 = pop_val(ctx);
			
			// add the next item into the previous ALT
			if(e1->type == BNF_EXP_ALT) {
				VEC_PREPEND(&e1->kids, e0);
				push_val(ctx, e1);
				return;
			}
			
			en = new_exp(BNF_EXP_ALT);
			VEC_PUSH(&en->kids, e0);
			VEC_PUSH(&en->kids, e1);
			push_val(ctx, en);
			
			return;
		
		case LTT_REP_OP:
		case LTT_GRP_OP:
		case LTT_OPT_OP:
			push_op(ctx, t);
			return;
			
		case LTT_OPT_CL:
			
			while((t2 = pop_op(ctx)) && (t2->type != LTT_OPT_OP)) {
// 				printf("> %p\n", t2);
				run_op(ctx, t2);
			}
			
			e0 = pop_val(ctx);
			
			en = new_exp(BNF_EXP_OPT);
			VEC_PUSH(&en->kids, e0);
			
			push_val(ctx, en);
			
			return;
			
		case LTT_REP_CL:
			
			while((t2 = pop_op(ctx)) && (t2->type != LTT_REP_OP)) {
// 				printf("> %p\n", t2);
				run_op(ctx, t2);
			}
			
			e0 = pop_val(ctx);
			
			en = new_exp(BNF_EXP_REP);
			VEC_PUSH(&en->kids, e0);
			
			push_val(ctx, en);
			
			return;
			
		case LTT_GRP_CL:
			while((t2 = pop_op(ctx)) && (t2->type != LTT_GRP_OP)) {
// 				printf("> %p\n", t2);
				run_op(ctx, t2);
			}
			
			return;
			
	}
	
	
}


static void parse_rule(parse_ctx* ctx) {
	bnf_lex_token* t_name, *t;
	
	t_name = next_token(ctx);
	if(t_name == NULL) {
		ctx->finished = 1;
		return;
	}
	if(t_name->type != LTT_RULE) {
		parse_error(ctx, "Expected rule name\n");
		return;
	}
	
	t = next_token(ctx);
	if(t->type != LTT_DEF) {
		parse_error(ctx, "Expected =\n");
		return;
	}
	
	
	
	// parse definition
	int top_prec = 0;
	bnf_lex_token* t2;
	while(1) {
// 			print_val_stack(ctx, 2);
// 			print_op_stack(ctx, 2);
		
		t = next_token(ctx);
		if(t == NULL) {
			parse_error(ctx, "Unexpected end of input.\n");
			return;
		}
		if(t->type == LTT_TERM) break;
		
		int prec = token_precedence[t->type];
		
		if(prec == -1) { // grouped openings
			push_op(ctx, t);
			continue;
		}
		
		if(prec == -2) { // grouped closings
			run_op(ctx, t);
			continue;
		}
		
		if(prec < 1) { // push val
// 			printf("pushing value\n");
			bnf_exp* en;
			switch(t->type) {
				case LTT_STR:
					en = new_exp(BNF_EXP_STR);
					break;
				case LTT_REGEX:
					en = new_exp(BNF_EXP_REGEX);
					break;
				case LTT_RULE:
					en = new_exp(BNF_EXP_RULE);
					break;
				default:
					// happens when missing a ;
					printf("err in creating new val %d\n", t->type);
					// TODO proper error
					break;
			}
			
			en->content = t->str;
			
			push_val(ctx, en);
			
			continue;
		}
		
		while(1) {
			if(VEC_LEN(&ctx->op_stack)) {
				top_prec = token_precedence[VEC_TAIL(&ctx->op_stack)->type];
			}
			else {
				top_prec = 0;
			}
// 				printf("prec: t: %d, top: %d \n", prec, top_prec);
			if(top_prec > prec) {
// 				printf("running op \n");
				t2 = pop_op(ctx);
				run_op(ctx, t2);
				continue;
			}
			
			push_op(ctx, t);
			break;
		}
		
	}
	
// 	print_val_stack(ctx, 2);
// 	print_op_stack(ctx, 2);
	// pop off the entire remaining op stack
	while(t2 = pop_op(ctx)) {
// 		printf("%d\n", t2->type);
		run_op(ctx, t2);
	
// 		print_val_stack(ctx, 2);
// 		print_op_stack(ctx, 2);
	}
	
	// should only have one value on the stack
	
	bnf_rule* r = add_rule(ctx, t_name->str);
	
	r->def = pop_val(ctx);
}




char* bnf_exp_type_names[] = {
	[BNF_EXP_RULE] = "RULE",
	[BNF_EXP_STR] = "STR",
	[BNF_EXP_REGEX] = "REGEX",
	[BNF_EXP_CAT] = "CAT",
	[BNF_EXP_ALT] = "ALT",
	[BNF_EXP_REP] = "REP",
	[BNF_EXP_OPT] = "OPT",
};

void print_val_stack(parse_ctx* ctx, int indent) {
	
	VEC_EACH(&ctx->val_stack, ei, e) {
			
		printf("%*s %s ", indent, " ", bnf_exp_type_names[e->type]/* e->content*/); 
		if(e->content) printf("'%s'", e->content);
		printf("\n");
	}
}

void print_op_stack(parse_ctx* ctx, int indent) {
	
	VEC_EACH(&ctx->op_stack, ei, e) {
			
		printf("%*s -%s ", indent, " ", token_names[e->type]/* e->content*/); 
		if(e->str) printf("'%s'", e->str);
		printf("\n");
	}
}



void print_exp(bnf_exp* e, int indent) {
	
	printf("%*s %s ", indent, " ", bnf_exp_type_names[e->type]/* e->content*/); 
	if(e->content) printf("'%s'", e->content);
	printf("\n");
	
	VEC_EACH(&e->kids, ki, k) {
		print_exp(k, indent + 2);
	}
	
}

//
// External API
//

bnf_ruleset* bnf_parse(char* source) {
	parse_ctx ctx;
	bnf_lex_ctx lctx;
	
	lctx.s = source;
	lctx.current_line = 0;
	lctx.current_char = 0;
	lctx.error_msg = NULL;
	lctx.finished = 0;
	VEC_INIT(&lctx.tokens);
	
	lex_run(&lctx);
	
	ctx.tokens.data = lctx.tokens.data;
	ctx.tokens.alloc = lctx.tokens.alloc;
	ctx.tokens.len = lctx.tokens.len;
	ctx.cur_token = 0;
	ctx.finished = 0;
	ctx.error_msg = NULL;
	VEC_INIT(&ctx.rules);
	VEC_INIT(&ctx.val_stack);
	VEC_INIT(&ctx.op_stack);
	
	while(!ctx.finished) {
		parse_rule(&ctx);
	}
	
// 	VEC_EACH(&ctx.rules, ri, r) {
// 		printf("> %s", r->name);
// 		print_exp(r->def, 0);
// 	}
	
	VEC_FREE(&ctx.tokens);
	VEC_FREE(&ctx.val_stack);
	VEC_FREE(&ctx.op_stack);
	
	bnf_ruleset* rs = calloc(1, sizeof(*rs));
	rs->rules.data = ctx.rules.data;
	rs->rules.alloc = ctx.rules.alloc;
	rs->rules.len = ctx.rules.len;
	
	return rs;
}




