#ifndef __InfernalC__codegen_h__
#define __InfernalC__codegen_h__

#include <stdint.h>


struct cg_func; typedef struct cg_func cg_func_t;
struct cg_block; typedef struct cg_block cg_block_t;

#include "x64/instructions.h"



/*
R = symbol is read
W = symbol is written
RW = symbol is read and written
I = informational symbol
N = not a symbol
*/
//            |  is symbol?  |
//   type       ret,  l,  r     
#define TACI_TYPE_LIST \
	X(add,        W, R, R) \
	X(accum,      W, R, N) \
	X(call,       R, N, N) \
	X(fn_arg,     R, N, N) \
	X(fn_call,    R, N, N) \
	X(fn_call_conv, N, N, N) \
	X(jmp,        N, N, N) \
	X(landing,    N, N, N) \
	X(load,       W, N, N) \
	X(move,       W, R, N) \
	X(nop,        N, N, N) \
	X(return,     N, N, N) \
	X(return_val, R, N, N) \
	X(set,        W, N, N) \


#define X(x, a,b,c) TACI_TYPE_##x,
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


// the pseudo-assembly memory targets are still symbol references
typedef struct pseudo_x64 {
	uint16_t op_id; // more or less the text name in assembly
	uint8_t src_type; // c=concrete register, r=temp register, s=symbol, m=deref of a register, i=immediate
	uint8_t dst_type; // c=concrete register, r=temp register, s=symbol, m=deref of a register
	uint8_t src_sz : 4; // operand width in powers of 2; 0 = 1B, 1 = 2B, 2 = 4B, 3 = 8B, 4 = 16B, 5 = 32B, ... 
	uint8_t dst_sz : 4; // operand width in powers of 2
	uint8_t immed_sz : 4; // width in powers of 2
		
	uint64_t src, dst, immed; // register, temporary, or immediate
} pseudo_x64_t;


// three-address code instruction
typedef struct taci {
	int type;
	int ret; // symbol id's
	int left, right;
} taci_t;

typedef struct taci_block {
	VEC(taci_t) tacis;
	ast_scope_info_t* scope;
} taci_block_t;


typedef struct temp_name {
	int assignment, last_ref; // indices into the taci block
	int symbol;
} temp_name_t;


typedef struct cg_func {
	char* name;
	taci_block_t* code;
	VEC(x64_instr_t) asmcode;
	
	VEC(temp_name_t) temps;
	
	taci_block_t* final_tacis;
	
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
	
	symbol_table_t* symtab;
} codegen_ctx_t;




cg_tu_t* cg_linearize_tu(codegen_ctx_t* ctx, ast_tu_t* atu);
void taci_to_pseudo_x64(codegen_ctx_t* ctx, cg_func_t* fn);


void linearize_basic_blocks(codegen_ctx_t* ctx, cg_func_t* fn);



typedef struct reg_alloc_info {
	struct  {
		
	} gpregs[16];
	
} reg_alloc_info_t;











#endif __InfernalC__codegen_h__ 
