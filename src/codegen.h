#ifndef __InfernalC__codegen_h__
#define __InfernalC__codegen_h__



struct cg_func; typedef struct cg_func cg_func_t;
struct cg_block; typedef struct cg_block cg_block_t;



#define TACI_TYPE_LIST \
	X(move) \
	X(load) \
	X(return_val) \
	X(return) \
	X(fn_call_conv) \
	X(fn_arg) \
	X(fn_call) \


#define X(x) TACI_TYPE_##x,
enum {
	TACI_TYPE_NONE = 0,
TACI_TYPE_LIST
	TACI_TYPE_MAX_VALUE

};
#undef X


extern char* taci_type_names[];




// three-address code instruction
typedef struct taci {
	int type;
	int ret;
	int left, right;
} taci_t;

typedef struct taci_block {
	VEC(taci_t*) tacis;
} taci_block_t;


typedef struct cg_var {
	char* name;
	size_t name_len;
	
	// allocation info
	int byte_width;
	long slot_num;
	
	// reference info
	struct {
		long start;
		long end;
	} range;
	
	ast_var_decl_t* source_tree;
} cg_var_t;




typedef struct cg_stmt {
	VEC(taci_t*) tacis;
	
	taci_block_t* code;

	ast_stmt_t* source_tree;
} cg_stmt_t;

typedef struct cg_func {
	char* name;
	
//	VEC(cg_var_t*) locals;
	taci_block_t* code;
	
	ast_func_t* source_tree;
} cg_func_t;


typedef struct cg_tu {
	VEC(cg_func_t*) fns;
	
	
	ast_tu_t* source_tree;
} cg_tu_t;


typedef struct cg_constant {
	char type;
	union {
		long s;
		unsigned long u;
		float f;
		double d;
	};
} cg_constant_t;


typedef struct {
	VEC(cg_tu_t*) tus;
	
	VEC(cg_constant_t*) constants;
	
} codegen_ctx_t;




cg_tu_t* cg_linearize_tu(codegen_ctx_t* ctx, ast_tu_t* atu);



#endif __InfernalC__codegen_h__ 
