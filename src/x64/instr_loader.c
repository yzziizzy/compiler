

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../sti/sti.h"




#define check(a) 0 == strncmp(s, a, strlen(a)) 


typedef struct instr {
	char name[16];
	char name_len;

	char oper_cnt;
	char opcode_len;
	
	struct {
		char type; // r = register (see class), m = memory, e = r/m (either), i = immediate, f = fixed register (number in class)
		char class; // register class or fixed number. g = gpr, f = fpu, c = control, d = debug, m = mmx, x = xmm, y = ymm, z = zmm
		char width; // in bytes
	} operands[3];
	
	unsigned char opcodes[16];
	
} instr_t;


typedef struct instr_group {
	char* name;
	VEC(instr_t) instructions;
} instr_group_t;

typedef struct instr_table {
	HT(instr_group_t*) groups;
} instr_table_t;



void init_instr_table(instr_table_t* tab) {
	HT_init(&tab->groups, 2048);
}


static void add_instr(instr_table_t* tab, instr_t* i) {
	instr_group_t* g;
	
	
	if(HT_get(&tab->groups, i->name, &g)) {
		g = calloc(1, sizeof(*g));
		g->name = strndup(i->name, i->name_len);
//		printf("%s\n", i->name);
		HT_set(&tab->groups, g->name, g);
	}
	
	VEC_PUSH(&g->instructions, *i);
}





int main(int argc, char* argv[]) {

	size_t fsz;
	char* src = readWholeFileExtra("insns.dat", 1, &fsz);
	src[fsz] = '\n';
	
	char* e;
	char* s = src;
	int field = 0;
	
	
	instr_table_t* tab = calloc(1, sizeof(*tab));
	init_instr_table(tab);
	
	instr_t i = {0};
	
	int dump_instr = 0;
	
	int do_reg_fanout = 0;
	int reg_fanout_opcode_n = 0;
	int reg_fanout_operand_n = 0;
	
	while(*s) {
		if(*s == ';') { // skip comment lines
			while(*s != '\n') s++;
			s++;
			continue;
		}
		
		if(isspace(*s)) { // skip whitespace
			s++;
			while(isspace(*s)) s++;
			continue;
		}
		
		if(field == 0) {

			
			e = strpbrk(s, " \t\r\n");
			
			i.name_len = e - s;
			for(int j = 0; j < e - s; j++) i.name[j] = tolower(s[j]);
			i.name[e - s] = 0;
			//printf("opcode: %.*s\n", (int)(e - s), s);
			
			s = e;
			field++;
		}
		else if(field == 1) {
			e = strpbrk(s, " \t\r\n");
			int oper_n = 0;
			
			while(!isspace(*s)) {
				char* f;
				f = strpbrk(s, ", \t\r\n");
				if(0 == strncmp(s, "reg", f - s)) {
					if(s[3] == '_') { // weird single-register instructions 
						// just skip it for now
						i.operands[oper_n].type = -1;
					}
					else {
						long w = strtol(s + 3, &f, 10) / 8;
						i.operands[oper_n].type = 'r';
						i.operands[oper_n].width = w;
					}
				}
				if(0 == strncmp(s, "rm", f - s)) {
					if(s[2] == '_') { // weird single-register instructions 
						// just skip it for now
						i.operands[oper_n].type = -1;
						dump_instr = 1; // we can't handle these yet
					}
					else {
						long w = strtol(s + 2, &f, 10) / 8;
						i.operands[oper_n].type = 'e';
						i.operands[oper_n].width = w;
					}
				}
				else if (0 == strncmp(s, "mem", f - s)) {
					i.operands[oper_n].type = 'm';
					if(isdigit(s[3])) {
						i.operands[oper_n].width = strtol(s + 3, &f, 10) / 8;
					}
					else {
						i.operands[oper_n].width = -1;	
					}
				}
				else if (0 == strncmp(s, "imm", f - s)) {
					i.operands[oper_n].type = 'i';
					if(isdigit(s[3])) {
						i.operands[oper_n].width = strtol(s + 3, &f, 10) / 8;
					}
					else {
						i.operands[oper_n].width = -1;
					}
				}
//				else if (0 == strncmp(s, "void", f - s)) {
//				}

				// TODO: |near,far    :imm32
				
				s = f;
				
				oper_n++;
				if(*s != ',') break;
				s++;
			}
			
			i.oper_cnt = oper_n;
			
			//printf("regs: %.*s\n", (int)(e - s), s);
		
			s = e;
			field++;
			
		}
		else if(field == 2) {
			s++; // skip the [
			e = strpbrk(s, "]");
//			printf("info: %.*s\n", (int)(e - s), s);
			// the operand info is *mostly* redundant right now. 'j' might hold useful information
		
			int op_n = 0;
			reg_fanout_operand_n = 0;
			while(!(isspace(*s) || *s == ':')) {
				if(*s == '-') reg_fanout_operand_n = op_n;
				op_n++;
				s++;
			}
		
			if(!isspace(*s)) s = strpbrk(s, " \t");
			
			s += strcspn(s, " \t");
			
			// TODO: put the 'ignore' check up here instead of modifying the file
			
			while(*s && *s != ']') {
				if(isspace(*s)) {
					s++;
					continue;
				}
				

				
				if(check("ignore")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("hlexr")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("hlenl")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("hle")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(s[0] == 'i' && (s[1] == 'b' || s[1] == 'w' || s[1] == 'd' || s[1] == 'q')) {
					
					// TODO: more immediate types
					
					int w = s[1] == 'b' ? 1 : (s[1] == 'w' ? 2 : (s[1] == 'd' ? 4 : 8));
					  
					for(int j = 0;j < i.oper_cnt; j++) {
						if(i.operands[j].type == 'i' && i.operands[j].width != w) {
							if(i.operands[j].width <= 0) { // fill in implicit operand size
								i.operands[j].width = w;
							}
							// spurrious error
//							else
//								printf("Operand size mismatch in %.*s for immediate operand #%d: %d <> %d\n", i.name_len, i.name, j, i.operands[j].width, w);
						}
					}
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("rel")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("seg")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("a16")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("a32")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("adf")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("a64")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("norexb")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("norexx")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("norexr")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("norexw")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("o16")) {
					for(int j = 0;j < i.oper_cnt; j++) {
						if(i.operands[j].width != 2) {
							if(i.operands[j].width <= 0) { // fill in implicit operand size
								i.operands[j].width = 2;
							}
							else
								printf("Operand size mismatch in %.*s for operand #%d: %d <> 2\n", i.name_len, i.name, j, i.operands[j].width);
						}
					}
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("o32")) {	
					for(int j = 0;j < i.oper_cnt; j++) {
						if(i.operands[j].width != 4) {
							if(i.operands[j].width <= 0) { // fill in implicit operand size
								i.operands[j].width = 4;
							}
							else
								printf("Operand size mismatch in %.*s for operand #%d: %d <> 4\n", i.name_len, i.name, j, i.operands[j].width);
						}
					}
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("odf")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("o64nw")) { // REX prefix on extensions only
					for(int j = 0;j < i.oper_cnt; j++) {
						if(i.operands[j].width != 8) {
							if(i.operands[j].width <= 0) { // fill in implicit operand size
								i.operands[j].width = 8;
							}
							// this flag only appears and applies to the second operand; suppress false errors on the first operand 
//							else
//								printf("X Operand size mismatch in %.*s for operand #%d: %d <> 2\n", i.name_len, i.name, j, i.operands[j].width);
						}
					}
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("o64")) { // REX prefix required
					for(int j = 0;j < i.oper_cnt; j++) {
						if(i.operands[j].width != 8) {
							if(i.operands[j].width <= 0) { // fill in implicit operand size
								i.operands[j].width = 8;
							}
							else
								printf("Operand size mismatch in %.*s for operand #%d: %d <> 8\n", i.name_len, i.name, j, i.operands[j].width);
						}
					}
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("nohi")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("nof3")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("norep")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("f2i")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("f3i")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("rex.l")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("repe")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("mustrep")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("mustrepne")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("resb")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("wait")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("np")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("!osp")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("!asp")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("jcc8")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("jmp8")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("jlen")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("vsibx") || check("vm32x") || check("vm64x")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("vsiby") || check("vm32y") || check("vm64y")) {
					s = strpbrk(s, " ]");
					continue;
				}
				if(check("vsibz") || check("vm32z") || check("vm64z")) {
					s = strpbrk(s, " ]");
					continue;
				}

				if(check( "/r")) {
					// signifies that r and m operands are required
					s = strpbrk(s, " ]");
					continue;
				}
				
				if(s[0] == '/' && isdigit(s[1])) { // /0 - /7
					// signifies that m memory is required
					s = strpbrk(s, " ]");
					continue;
				}

				if(check("vex") || check("evex") || check("xop")) {
					s = strpbrk(s, " ]");
					continue;
				}
				
				if(check("/is")) {
					s = strpbrk(s, " ]");
					continue;
				}
				
				// now we're past all the prefixes and flags
				
				if(isxdigit(*s)) {
					i.opcodes[i.opcode_len++] = strtol(s, &s, 16);
					
					if(*s == '+') { // this opcode is actually a range of opcodes encoding specific registers
						do_reg_fanout = 1;
						reg_fanout_opcode_n = i.opcode_len - 1;
						
						s = strpbrk(s, " ]");
					}
					
					continue;
				}
				
				printf("parse error in opcode field: unknown data\n");
			}
			
			//s = e + 1;
			field++;
			
		}
		else if(field == 3) {
			e = strpbrk(s, " \t\r\n");
			
			
			//printf("flags: %.*s\n", (int)(e - s), s);
			
			while(*s && !isspace(*s)) {
				if(*s == ',') s++;
				
				e = strpbrk(s, ", \t\r\n");
				
				if(check("NOLONG")) { // we don't care about instructions that don't work in 64-bit mode
					dump_instr = 1;
				}
				if(check("FPU") || check("OBSOLETE")) { // we don't care about legacy instructions 
					dump_instr = 1;
				}
				if(check("AVX512")) { // we don't care about the power virus
					dump_instr = 1;
				}
				
				if(check("FUTURE")) { // I (probably) don't have a machine new enough to test all of these
					dump_instr = 1;
				}
				
				s = e;
			}
			
			
//			s = e;
			field = 0;
			
			if(!dump_instr) {
				if(!do_reg_fanout) {
					add_instr(tab, &i);
				}
				else {
					// some instructions are actually a series of instructions that implicitly 
					//   encode a specific register into their opcode.
					i.operands[reg_fanout_operand_n].type = 'f';
				
					for(int j = 0; j < 8; j++) {
						i.opcodes[reg_fanout_opcode_n]++;
						i.operands[reg_fanout_operand_n].class = j;
						add_instr(tab, &i);
					}
					
					do_reg_fanout = 0;
					reg_fanout_opcode_n = 0;
				}
			}
			
			dump_instr = 0;			
			i = (instr_t){0};
			
		}
		
		
		s++;
	}
	
	
	HT_EACH(&tab->groups, ke, instr_group_t*, v) {
		printf("%s: %ld\n", ke, VEC_LEN(&v->instructions));
	}
	
	
	free(src);
}





