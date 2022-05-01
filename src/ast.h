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
	X(stmt_call) \
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




#define SYM_TYPE_LIST \
	X(unbound) \
	X(literal) \


#define X(x) SYM_TYPE_##x,
enum {
	SYM_TYPE_NONE = 0,
SYM_TYPE_LIST
	SYM_MAX_VALUE
};
#undef X


struct symbol_table;



typedef struct symbol {
	int id;
	int type;
	int depth; // in bits
	int ptr_lvl; // levels of indirection; -1 = literal, 0 = local var, 1 = f32*, 2 = f32**, etc
	
	char* name;
	int scope_id;
	
	union {
		double d;
		float f;
		long l;
		unsigned long u;
		char* str;
	} value;
} symbol_t;




typedef struct ast_name_info {
	int symbol_id; // -1 for unbound
	char* name;
} ast_name_info_t;


typedef struct ast_scope_info {
	VEC(ast_name_info_t) name_lookup;
	struct ast_scope_info* parent;
	struct symbol_table* table;
} ast_scope_info_t;


typedef struct symbol_table {
	VEC(symbol_t) symbols;
	VEC(ast_scope_info_t) scopes;
} symbol_table_t;




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
	int type;
	
	union {
		symbol_t* symbol;
	};
} ast_expr_t;


typedef struct ast_var_decl {
	ast_type_t* type;
	int name;
	ast_expr_t* init;
} ast_var_decl_t;


typedef struct ast_stmt_assign {
//	ast_lval_t* l;
//	ast_rval_t* r;
} ast_stmt_assign_t;


typedef struct ast_stmt_return {
	VEC(ast_expr_t*) values;
} ast_stmt_return_t;

typedef struct ast_stmt_call {
	int convention; // c = cdecl, s = syscall  
	symbol_t* name;
	VEC(ast_expr_t*) args;
} ast_stmt_call_t;


typedef struct ast_stmt {
	int type;
	union {
		ast_var_decl_t* var_decl;
		ast_stmt_assign_t* stmt_assign;
		ast_stmt_call_t* stmt_call;
		ast_stmt_return_t* stmt_return;
		ast_block_t* block;
		// fn call
	};

} ast_stmt_t;

typedef struct ast_block {
	ast_scope_info_t* locals;
	
	VEC(ast_stmt_t*) statements;
} ast_block_t;


typedef struct ast_func {
	VEC(ast_type_t*) return_types;
	VEC(ast_arg_t*) arguments;
	
	int name;
	
	ast_block_t* body;

} ast_func_t;


typedef struct ast_tu {
	symbol_table_t* symtab;
	
	ast_scope_info_t* globals;
	VEC(ast_func_t*) fns;

} ast_tu_t;




#endif __InfernalC__ast_h__
