#include <stdlib.h>
#include <stdio.h>

#include "ast.h"
#include "codegen.h"





#define X(x) [TACI_TYPE_##x] = #x,
char* taci_type_names[] = {
	[TACI_TYPE_NONE] = "NONE",
TACI_TYPE_LIST
	[TACI_TYPE_MAX_VALUE] = "MAX_VALUE"
};
#undef X



taci_t* new_taci(int type, int ret, int l, int r) {
	taci_t* t = calloc(1, sizeof(*t));
	
	t->type = type;
	t->ret = ret;
	t->left = l;
	t->right = r;
	
	return t;
}

void print_taci(taci_t* t) {
	printf("%s[ret=%d, l=%d, r=%d]", taci_type_names[t->type], t->ret, t->left, t->right); 
}

void print_taci_block(taci_block_t* bl, int line_offset) {

	VEC_EACH(&bl->tacis, i, t) {
		printf("%ld: ", line_offset + i);
		print_taci(t);
		printf("\n");
	}
}


static long push_taci(taci_block_t* bl, taci_t* t) {
	long index = VEC_LEN(&bl->tacis);
	VEC_PUSH(&bl->tacis, t);
	return index;
}

static void cat_taci_block(taci_block_t* a, taci_block_t* b) {
	VEC_CAT(&a->tacis, &b->tacis);
}


static long ctx_add_const_s(codegen_ctx_t* ctx, long s) {
	long index = VEC_LEN(&ctx->constants);

	cg_constant_t* c = calloc(1, sizeof(c));
	VEC_PUSH(&ctx->constants, c);
	
	c->type = 's';
	c->s = s;
	
	return index;
}



cg_stmt_t* cg_linearize_stmt(codegen_ctx_t* ctx, ast_stmt_t* astmt) {
	cg_stmt_t* stmt;
	long n, nvals;
	
	
	stmt = calloc(1, sizeof(*stmt));
	stmt->source_tree = astmt;
	stmt->code = calloc(1, sizeof(*stmt->code));
	
	
	switch(astmt->type) {
		case AST_TYPE_stmt_return:
			
			VEC_EACH(&astmt->stmt_return->values, i, v) {
				n = ctx_add_const_s(ctx, v->literal->value);
				push_taci(stmt->code, new_taci(TACI_TYPE_return_val, n, 0, 0));
			}
			
			push_taci(stmt->code, new_taci(TACI_TYPE_return, VEC_LEN(&astmt->stmt_return->values), 0, 0));
			
			break;
		
		case AST_TYPE_stmt_call: {
			ast_stmt_call_t* c = astmt->stmt_call;
			
			if(c->convention == 's') { // bare syscall
			
				push_taci(stmt->code, new_taci(TACI_TYPE_fn_call_conv, 's', 0, 0));
				
				// arguments that are present in the code
				VEC_EACH(&c->args, i, arg) {
					push_taci(stmt->code, new_taci(TACI_TYPE_fn_arg, arg->literal->value, i, 0));
				}
				
				// fill in the rest of the empty arguments
				for(int n = VEC_LEN(&c->args); n < 6; n++) {
					push_taci(stmt->code, new_taci(TACI_TYPE_fn_arg, 0, n, 0));
				}
				
				
				int fn_name = -1;
				push_taci(stmt->code, new_taci(TACI_TYPE_fn_call, fn_name, 0, 0));
			
			}
			else {
				fprintf(stderr, "calling convention %d tNYI in %s\n", c->convention, __func__);
				break;
			}
			
			break;			
		}
		default:
			fprintf(stderr, "%s type NYI in %s\n", ast_type_names[astmt->type], __func__);
			break;
	}
	
	return stmt;
}



cg_func_t* cg_linearize_func(codegen_ctx_t* ctx, cg_tu_t* cgtu, ast_func_t* afn) {
	cg_func_t* fn;

	fn = calloc(1, sizeof(*fn));
	fn->code = calloc(1, sizeof(*fn->code));
	
	VEC_EACH(&afn->body->statements, i, astmt) {
		
		cg_stmt_t* stmt = cg_linearize_stmt(ctx, astmt);
		
		cat_taci_block(fn->code, stmt->code);
	
		// BUG: leaking stmt
	}

	return fn;
}


cg_tu_t* cg_linearize_tu(codegen_ctx_t* ctx, ast_tu_t* atu) {
	cg_tu_t* cgtu;
	
	cgtu = calloc(1, sizeof(*cgtu));
	cgtu->source_tree = atu;
	
	
	VEC_EACH(&atu->fns, i, afn) {
		cg_func_t* cgfn = cg_linearize_func(ctx, cgtu, afn); 
		
		printf("\n--fn:--\n");
		print_taci_block(cgfn->code, 0);
	}
	
	
	
	VEC_PUSH(&ctx->tus, cgtu);
	return cgtu;
}


















