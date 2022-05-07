#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "ast.h"
#include "codegen.h"

#define MIN(a,b) ((a) > (b) ? (b) : (a));
#define MAX(a,b) ((a) < (b) ? (b) : (a));


typedef uint8_t byte;

static byte encodeREX(char w, char r, char x, char b);
static byte encodeModRM(unsigned char mod, unsigned char reg, unsigned char rm);


void calc_symbol_lifetimes(codegen_ctx_t* ctx, cg_func_t* fn);
//void allocate_registers_x64(codegen_ctx_t* ctx, cg_func_t* fn);


enum {
#define X(id, n, len) X64_##n = id,
	INSTRUCTION_GROUP_X_LIST
#undef X
};


#define X(x, a,b,c) [TACI_TYPE_##x] = #x,
char* taci_type_names[] = {
	[TACI_TYPE_NONE] = "NONE",
TACI_TYPE_LIST
	[TACI_TYPE_MAX_VALUE] = "MAX_VALUE"
};
#undef X

#define N  0x00
#define R  0x01
#define W  0x02
#define RW 0x03
#define I  0x04

#define X(x, a,b,c) [TACI_TYPE_##x] = (a << 6) | (b << 3) | c,
unsigned int taci_operand_info[] = {
	[TACI_TYPE_NONE] = 0,
TACI_TYPE_LIST
	[TACI_TYPE_MAX_VALUE] = 0
};
#undef X

#undef N
#undef R
#undef W
#undef RW
#undef I


taci_t* new_taci(int type, int ret, int l, int r) {
	taci_t* t = calloc(1, sizeof(*t));
	
	t->type = type;
	t->ret = ret;
	t->left = l;
	t->right = r;
	
	return t;
}

static void print_taci(taci_t* t) {
	printf("%s[ret=%d, l=%d, r=%d]", taci_type_names[t->type], t->ret, t->left, t->right); 
}

static void print_taci_block(taci_block_t* bl, int line_offset) {

	VEC_EACHP(&bl->tacis, i, t) {
		printf("%ld: ", line_offset + i);
		print_taci(t);
		printf("\n");
	}
}

static symbol_t* new_temp(codegen_ctx_t* ctx) {
	symbol_t* s;
	
	VEC_INC(&ctx->symtab->symbols);
	s = &VEC_TAIL(&ctx->symtab->symbols);
	
	*s = (symbol_t){0};
	s->flags |= SYM_TEMP;
	s->id = VEC_LEN(&ctx->symtab->symbols) - 1;
	
	return s;
}

static symbol_t* copy_temp(codegen_ctx_t* ctx, symbol_t* o) {
	symbol_t* s;
	
	VEC_INC(&ctx->symtab->symbols);
	s = &VEC_TAIL(&ctx->symtab->symbols);
	
	*s = *o;
	s->name = NULL;
	s->flags |= SYM_TEMP;
	s->id = VEC_LEN(&ctx->symtab->symbols) - 1;
	
	return s;
}

static symbol_t* copy_temp_id(codegen_ctx_t* ctx, int o) {
	symbol_t* os = get_symbol(ctx->symtab, o);
	return copy_temp(ctx, os);
}


static char* asm_inst_names[] = {
	[2] = "mov",
	[3] = "syscall",
	NULL,
};

static void print_asm_instr(x64_instr_t* t) {
	printf("%s", asm_inst_names[t->op_id]); 
}
static void print_asm_block(cg_func_t* fn, int line_offset) {

	VEC_EACHP(&fn->asmcode, i, t) {
		printf("%ld: ", line_offset + i);
		print_asm_instr(t);
		printf("\n");
	}
}


static long push_taci(taci_block_t* bl, taci_t* t) {
	long index = VEC_LEN(&bl->tacis);
	VEC_PUSH(&bl->tacis, *t);
	return index;
}

static void cat_taci_block(taci_block_t* a, taci_block_t* b) {
	VEC_CAT(&a->tacis, &b->tacis);
}



// transforms fn_* operations to movs and calls
void resolve_function_calling_conventions(codegen_ctx_t* ctx, taci_block_t* b) {
//	VEC_EACH(b->tacis, i, to) {
		
//		copy_temp()
		
//	}
}



void cg_linearize_stmt(codegen_ctx_t* ctx, ast_stmt_t* astmt, taci_block_t* b) {
	long n, nvals;
	
	
//	stmt = calloc(1, sizeof(*stmt));
//	stmt->source_tree = astmt;
//	stmt->code = calloc(1, sizeof(*stmt->code));
	
	
	switch(astmt->type) {
		case AST_TYPE_stmt_assign: {
			ast_expr_t* rv = astmt->stmt_assign->rval;
			
			if(rv->type == 's') { // just a symbol
				push_taci(b, new_taci(TACI_TYPE_set, astmt->stmt_assign->lval, rv->sym, 0));
			}
			else if(rv->type == 'a') { // arithmetic expression
				push_taci(b, new_taci(TACI_TYPE_add, astmt->stmt_assign->lval, rv->arith->a, rv->arith->b));
			}
			
			break;
		}
		
		case AST_TYPE_stmt_return:
			
			VEC_EACH(&astmt->stmt_return->values, i, v) {
//				n = ctx_add_const_s(ctx, v->literal->value);
				push_taci(b, new_taci(TACI_TYPE_return_val, n, 0, 0));
			}
			
			push_taci(b, new_taci(TACI_TYPE_return, VEC_LEN(&astmt->stmt_return->values), 0, 0));
			
			break;
		
		case AST_TYPE_var_decl: {
			// handle initialization
			
			// do nothing for now; the data is in the scope_info struct
		
			break;
		}
		
		case AST_TYPE_stmt_call: {
			ast_stmt_call_t* c = astmt->stmt_call;
			
			if(c->convention == 's') { // bare syscall
			
				push_taci(b, new_taci(TACI_TYPE_fn_call_conv, 's', 0, 0));
				
				// arguments that are present in the code
				VEC_EACH(&c->args, i, arg) {
					push_taci(b, new_taci(TACI_TYPE_fn_arg, arg->sym, i, 0));
				}
				
				/* apparently not necessary
				// fill in the rest of the empty arguments
				for(int n = VEC_LEN(&c->args); n < 6; n++) {
					push_taci(b, new_taci(TACI_TYPE_fn_arg, 0, n, 0));
				}
				*/
				
				int fn_name = -1;
				push_taci(b, new_taci(TACI_TYPE_fn_call, c->name->id, 0, 0));
			
			}
			else {
				fprintf(stderr, "calling convention %d NYI in %s\n", c->convention, __func__);
				break;
			}
			
			break;			
		}
		default:
			fprintf(stderr, "%s type NYI in %s\n", ast_type_names[astmt->type], __func__);
			break;
	}
	
}



cg_func_t* cg_linearize_func(codegen_ctx_t* ctx, cg_tu_t* cgtu, ast_func_t* afn) {
	cg_func_t* fn;

	fn = calloc(1, sizeof(*fn));
	fn->code = calloc(1, sizeof(*fn->code));
	fn->source_tree = afn;
	
	// the beginning of a function is a jump target
	push_taci(fn->code, new_taci(TACI_TYPE_landing, 0, 0, 0));
	
	VEC_EACH(&afn->body->statements, i, astmt) {
		
		cg_linearize_stmt(ctx, astmt, fn->code);
		
//		cat_taci_block(fn->code, stmt->code);
	
		// BUG: leaking stmt
	}

	return fn;
}


cg_tu_t* cg_linearize_tu(codegen_ctx_t* ctx, ast_tu_t* atu) {
	cg_tu_t* cgtu;
	
	cgtu = calloc(1, sizeof(*cgtu));
	cgtu->source_tree = atu;
	
	
	VEC_EACH(&atu->fns, i, afn) {
		// late binding and name resolution
	
		// generate linear Three-Address Code
		cg_func_t* cgfn = cg_linearize_func(ctx, cgtu, afn); 
		
		printf("\n--TAC:--\n");
		print_taci_block(cgfn->code, 0);
		
		// break into basic blocks
		
		// convert to SSA
		
		// optimizations
		
		// linearize basic blocks
		linearize_basic_blocks(ctx, cgfn);
		
		// choose asm instructions
		taci_to_pseudo_x64(ctx, cgfn);
		
		// register allocation
//		allocate_registers_x64(ctx, cgfn);
		

		printf("\n\n--assembly:--\n");
		print_asm_block(cgfn, 0);
	}
	
	
	
	VEC_PUSH(&ctx->tus, cgtu);
	return cgtu;
}




void calc_symbol_lifetimes(codegen_ctx_t* ctx, cg_func_t* fn) {
	ast_scope_info_t* si = fn->source_tree->body->scope;
	
	// calculate extents of each symbol
	VEC_EACHP(&fn->final_tacis->tacis, i, t) {
		unsigned int info = taci_operand_info[t->type];
		
		int r = (info >> 6) & 0x7;
		int a = (info >> 3) & 0x7;
		int b = info & 0x7;
		
		if(r & 3) {
			symbol_t* s = get_symbol(ctx->symtab, t->ret);
			s->first_ref = s->first_ref == 0 ? i : MIN(s->first_ref, i); // this works because the first TACI of a block is always a landing		
			s->last_ref = MAX(s->last_ref, i);				
		}
		if(a & 3) {
			symbol_t* s = get_symbol(ctx->symtab, t->left);
			s->first_ref = s->first_ref == 0 ? i : MIN(s->first_ref, i);				
			s->last_ref = MAX(s->last_ref, i);				
		}
		if(b & 3) {
			symbol_t* s = get_symbol(ctx->symtab, t->right);
			s->first_ref = s->first_ref == 0 ? i : MIN(s->first_ref, i);				
			s->last_ref = MAX(s->last_ref, i);				
		}
	}	
	
	// debug printing
	printf("\n--symbol lifetime--\n");
	VEC_EACHP(&si->name_lookup, i, ni) {
//		printf("name: [%d]%s, first: %d, last: %d\n", ni->symbol_id, ni->name, ni->first_ref, ni->last_ref);
	}
	
}



void linearize_basic_blocks(codegen_ctx_t* ctx, cg_func_t* fn) {
	
	
	// right now there's only one block
	//    ....so it's already linearized
	
	fn->final_tacis = calloc(1, sizeof(*fn->final_tacis));
	
	VEC_EACHP(&fn->code->tacis, i, t) {
		VEC_PUSH(&fn->final_tacis->tacis, *t);
		
	}
	
	ast_scope_info_t* si = fn->source_tree->body->scope;
	
}




//void allocate_registers_x64() {}



// W = 1 means 64 bit operand size
// R is the MSB of the modr/m reg field
// X is the MSB of the sib index field
// B is the MSB of the modr/m r/m field, sib base field, or opcode reg field
static byte encodeREX(char w, char r, char x, char b) {
	return 0 | (1 << 6) | (!!w << 3) | (!!r << 2) | (!!x << 1) | (!!b);
}

// reg usually encodes the second operand, usually the destination
// mod+r/m usually encode the first operand
// reg sometimes stores extra opcode information
// rarely, mod+rm can store extra opcode info

static byte encodeModRM(unsigned char mod, unsigned char reg, unsigned char rm) {
	byte out = 0;
	
	out |= mod << 6;
	out |= (reg & 0x7) << 3;
	out |= (rm & 0x7);
	
	return out;
}






x64_instr_t* push_x64(codegen_ctx_t* ctx, cg_func_t* fn, 
	int op, char src_is_reg, char src_sz, uint64_t src, char dst_is_reg, char dst_sz, uint64_t dst, 
	char immed_sz, uint64_t immed, uint64_t disp
) {
	x64_instr_t* inst;
	
	VEC_INC(&fn->asmcode);
	inst = &VEC_TAIL(&fn->asmcode);
	
	inst->op_id = op;
	inst->src_is_reg = src_is_reg; 
	inst->dst_is_reg = dst_is_reg; 
	inst->src_sz = src_sz;
	inst->dst_sz = dst_sz;
	inst->src = src;
	inst->dst = dst;
	inst->immed = immed;
	inst->immed_sz = immed_sz;
	inst->disp = disp;
	
	return inst;
}



#define r8   1, 0, 
#define r16  1, 1, 
#define r32  1, 2, 
//#define r64  1, 3, 
#define r128 1, 4, 
#define r256 1, 5, 
#define m8   0, 0,
#define m16  0, 1,
#define m32  0, 2,
#define m64  0, 3,
#define m128 0, 4,
#define m256 0, 5,

#define reg_ax   0
#define reg_bx   1
#define reg_cx   2
#define reg_dx   3
#define reg_bp   4
#define reg_sp   5
#define reg_di   6
#define reg_si   7
#define reg_r8   8
#define reg_r9   9
#define reg_r10 10
#define reg_r11 11
#define reg_r12 12
#define reg_r13 13
#define reg_r14 14
#define reg_r15 15

#define r64
#define RAX r64 reg_ax  
#define RBX r64 reg_bx  
#define RCX r64 reg_cx  
#define RDX r64 reg_dx  
#define RBP r64 reg_bp  
#define RSP r64 reg_sp  
#define RDI r64 reg_di  
#define RSI r64 reg_si  
#define R8  r64 reg_r8  
#define R9  r64 reg_r9 
#define R10 r64 reg_r10 
#define R11 r64 reg_r11  
#define R12 r64 reg_r12  
#define R13 r64 reg_r13  
#define R14 r64 reg_r14  
#define R15 r64 reg_r15  

#define i8  1,
#define i16 2,
#define i32 3,
#define i64 4,

#define I0(code) VEC_PUSH(&pa, ((pseudo_x64_t){X64_##code, 0, 0, 0, 0, 0, 0, 0, 0 }));
#define II(code, i, d) push_x64(ctx, fn, X64_##code, 0,0,0, d, i, 0);
#define I(code, dt,dsz,dv, st,ssz,sv) VEC_PUSH(&pa, ((pseudo_x64_t){X64_##code, st, dt, ssz, dsz, ssz, sv, dv, 0}));

void taci_to_pseudo_x64(codegen_ctx_t* ctx, cg_func_t* fn) {

	VEC(pseudo_x64_t) pa;
	VEC_INIT(&pa);
	

	VEC_EACHP(&fn->final_tacis->tacis, i, taci) {
		
		switch(taci->type) {
			
			case TACI_TYPE_fn_call_conv:
			
				break;
				
			case TACI_TYPE_set:
				I(mov, 's',3,taci->ret, 'i',3,taci->left)
				break;
			
			case TACI_TYPE_add: {
				symbol_t* s = copy_temp_id(ctx, taci->left);
				I(mov, 'r',3,s->id, 's',3,taci->left)
				I(add, 'r',3,s->id, 's',3,taci->right)
				I(mov, 's',3,taci->ret, 'r',3,s->id)
				break;
			}
			case TACI_TYPE_fn_arg:
				switch(taci->left) {
//					case : I(mov, ''
					case 0: I(mov, 'c',3,RDI, 's',3,taci->left) break;
					case 1: I(mov, 'c',3,RSI, 's',3,taci->left) break;
					case 2: I(mov, 'c',3,RDX, 's',3,taci->left) break;
					case 3: I(mov, 'c',3,R10, 's',3,taci->left) break;
					case 4: I(mov, 'c',3,R8,  's',3,taci->left) break;
					case 5: I(mov, 'c',3,R9,  's',3,taci->left) break;
				}
				
				break;
				
			case TACI_TYPE_fn_call:
			
				// mov %rax, <syscall num (60 for exit)>
				I(mov, 'c',3,RAX,  'i',3,60)
				// syscall
				I0(syscall)
				break;
			
			
		}
	}
	
	printf("\n--pseudo assembly:--\n");
	VEC_EACHP(&pa, i, a) {
		printf("%ld: %s ", i, instruction_group_index[a->op_id].name);
		if(a->dst_type == 'r') printf("!%ld", a->dst);
		if(a->dst_type == 's') printf("[%ld]", a->dst);
		if(a->dst_type == 'c') printf("%%%ld", a->dst);
		
		printf(", ");

		if(a->src_type == 'r') printf("!%ld", a->src);
		if(a->src_type == 's') printf("[%ld]", a->src);
		if(a->src_type == 'c') printf("%%%ld", a->src);
		if(a->src_type == 'i') printf("%ld", a->src);

		printf("\n");
		
	}
	
}









