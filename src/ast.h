#ifndef __InfernalC__ast_h__
#define __InfernalC__ast_h__


#include "sti/vec.h"





#define AST_TYPE_LIST \
	X(literal) \
	X(type) \
	X(arg) \
	X(expr) \
	X(var_decl) \
	X(stmt) \
	X(stmt_assign) \
	X(stmt_return) \
	X(block) \
	X(func) \
	X(tu) \


#define X(x) struct ast_##x; typedef struct ast_##x ast_##x##_t;
	AST_TYPE_LIST
#undef X



#define X(x) AST_TYPE_##x,
enum {
	AST_TYPE_NONE = 0,
AST_TYPE_LIST
	AST_MAX_VALUE
};
#undef X

extern char* ast_type_names[];




typedef struct ast_literal {
	int value;
} ast_literal_t;

typedef struct ast_type {
	char type; // [s]igned, [u]unsigned, [f]loat, [m]atrix, [v]oid
	int depth; // in bits
	int ptr_lvl; // levels of indirection; 0 = actual value, 1 = f32*, 2 = f32**, etc
} ast_type_t;


typedef struct ast_arg {
	ast_type_t* type;
	char* name;
	size_t name_len;
} ast_arg_t;

typedef struct ast_expr {
	ast_literal_t* literal;
} ast_expr_t;


typedef struct ast_var_decl {
	ast_type_t* type;
	char* name;
	size_t name_len;
	ast_expr_t* init;
} ast_var_decl_t;


typedef struct ast_stmt_assign {
//	ast_lval_t* l;
//	ast_rval_t* r;
} ast_stmt_assign_t;


typedef struct ast_stmt_return {
	VEC(ast_expr_t*) values;
} ast_stmt_return_t;


typedef struct ast_stmt {
	int type;
	union {
		ast_var_decl_t* var_decl;
		ast_stmt_assign_t* stmt_assign;
		ast_stmt_return_t* stmt_return;
		ast_block_t* block;
		// fn call
	};

} ast_stmt_t;

typedef struct ast_block {
	VEC(ast_var_decl_t*) locals;
	VEC(ast_stmt_t*) statements;
} ast_block_t;


typedef struct ast_func {
	VEC(ast_type_t*) return_types;
	VEC(ast_arg_t*) arguments;
	
	char* name;
	
	ast_block_t* body;

} ast_func_t;


typedef struct ast_tu {
	VEC(ast_func_t*) fns;

} ast_tu_t;




#endif __InfernalC__ast_h__
