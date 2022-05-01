#ifndef __InfernalC__codegen_h__
#define __InfernalC__codegen_h__

#include <stdint.h>


struct cg_func; typedef struct cg_func cg_func_t;
struct cg_block; typedef struct cg_block cg_block_t;


#define OPCODE_LIST \
	X(mov, 


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


typedef struct x64_instr {
	uint16_t op_id;
	uint16_t src_is_reg : 1; // 1 = src is a register, 2 = src is a memory address (symbol)
	uint16_t dst_is_reg : 1; // 1 = dst is a register, 2 = dst is a memory address (symbol)
	uint16_t src_sz : 3; // operand width in powers of 2; 0 = 1B, 1 = 2B, 2 = 4B, 3 = 8B, 4 = 16B, 5 = 32B, ... 
	uint16_t dst_sz : 3; // operand width in powers of 2
	uint16_t immed_sz : 3; // operand width plus 1 (in powers of 2); 0 = no immediate value, 1 = 1B, 2 = 2B, 3 = 4B, ...
		
	// operand sizes
	// prefixes
	uint64_t src, dst; // register or symbol
	uint64_t disp, immed; // actual values
	
	// encoded machine instructions
	uint8_t byte_len;
	uint8_t bytes[15];
} x64_instr_t;


// three-address code instruction
typedef struct taci {
	int type;
	int ret; // symbol id's
	int left, right;
} taci_t;

typedef struct taci_block {
	VEC(taci_t*) tacis;
} taci_block_t;




typedef struct cg_func {
	char* name;
	taci_block_t* code;
	VEC(x64_instr_t) asmcode;
	
	ast_func_t* source_tree;
} cg_func_t;


typedef struct cg_tu {
	VEC(cg_func_t*) fns;
	
	
	ast_tu_t* source_tree;
} cg_tu_t;



typedef struct {
	VEC(cg_tu_t*) tus;
	
	void* rodata_base;
	void* globals_base;
	
	symbol_table_t* symbols;
} codegen_ctx_t;




cg_tu_t* cg_linearize_tu(codegen_ctx_t* ctx, ast_tu_t* atu);
void taci_to_x64(codegen_ctx_t* ctx, cg_func_t* fn);


#endif __InfernalC__codegen_h__ 
