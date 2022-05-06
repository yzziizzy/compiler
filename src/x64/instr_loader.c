

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../sti/sti.h"




#define check(a) 0 == strncmp(s, a, strlen(a)) 

// flags:

#define ALLOWS_REX         0x0000000000000001ul
#define REQUIRES_REX       0x0000000000000002ul

// operand size override, 32 -> 16
#define REQUIRES_66        0x0000000000000004ul






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
	
	unsigned long flags;
	
	unsigned char opcodes[16];
	
} instr_t;


typedef struct instr_group {
	char* name;
	int name_id;
	unsigned int name_hash;
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


static int sortfn(void* _a, void* _b) {
	instr_group_t** a = (instr_group_t**)_a;
	instr_group_t** b = (instr_group_t**)_b;
	return strcmp((**a).name, (**b).name);
}

static int int_sortfn(void* a, void* b) {
	return *(unsigned int*)b - *(unsigned int*)a;
}


// This function must match the function printed to instructions.c below.
// Based on https://stackoverflow.com/questions/2351087/what-is-the-best-32bit-hash-function-for-short-strings-tag-names
static uint32_t hash32(char* s) {
	uint32_t h = 13; // to prevent empty strings from hashing to zero
	
	for(uint8_t* p = (uint8_t*)s; *p; p++) {
		h = 37 * h + *p;
	}
	
	h += (h >> 5);
	return h;
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
					i.operands[oper_n].class = 'g'; // general purpose registers
					
					if(s[3] == '_') { // weird single-register instructions and arch registers
						// just skip it for now
						i.operands[oper_n].type = -1;
						
						if(s[4] = 's' || s[4] == 's' || s[4] == 'c') {
							// special registers we don't care about
							dump_instr = 1;
						}
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
				else if (0 == strncmp(s, "mmxreg", f - s)) {
					i.operands[oper_n].type = 'r';
					i.operands[oper_n].class = 'x';
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
			
			
			
			while(*s && *s != ']') {
				if(isspace(*s)) {
					s++;
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
					i.flags |= REQUIRES_66; // 16 bit because of operand size override prefix
					
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
					i.flags |= ALLOWS_REX;
					
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
					i.flags |= ALLOWS_REX | REQUIRES_REX;
					
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
				if(check("PRIV")) { // we're not writing a kernel driver (yet)
					dump_instr = 1;
				}
				if(check("FPU") || check("3DNOW") || check("OBSOLETE")) { // we don't care about legacy instructions 
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
	
	
	
	
	struct bucket {
		uint32_t hash;
		uint32_t instr_index;
	}; 
	
	int ht_sz = 2048;
	struct bucket* buckets = calloc(1, sizeof(*buckets) * ht_sz); 
	
	VEC(instr_group_t*) list;
	VEC_INIT(&list);
	
	HT_EACH(&tab->groups, ke, instr_group_t*, v) {
		VEC_PUSH(&list, v);
	}
	

	
	VEC_SORT(&list, sortfn);
	
	int total = 0;
	VEC_EACH(&list, j, g) {
		g->name_hash  = hash32(g->name);
		if(g->name_hash == 0) printf("Warning: zero hash value detected for '%s', problems possible.\n", g->name);
		g->name_id = j + 1;
		
		int index = g->name_hash % ht_sz;
		do {
			if(buckets[index].hash == 0) {
				buckets[index].hash = g->name_hash;
				buckets[index].instr_index = g->name_id;
				break;
			}
			
			index = (index + 1) % ht_sz;
		} while(1);
		
//		total += VEC_LEN(&g->instructions);
//		printf("%d - %s: %ld\n", g->name_id, g->name, VEC_LEN(&g->instructions));
	}
	
	
//	printf("total variations: %d\n", total);
	
	/*
	struct instruction {
		char opcodes_len;
		char operands_len;
		
		char opcodes[8]; // max found to be 5 originally 
		struct {
			char type;
			char class;
			char width;
		} operands[4];
		
		unsigned long flags;
	};
	*/
	
//	int max_opcodes = 0;
	
	FILE* dotc = fopen("instructions.c", "w");
	FILE* doth = fopen("instructions.h", "w");
	
	
	fprintf(dotc, "// DO NOT EDIT: This file generated from insns.dat, originally\n//   sourced from the NASM project then modified.\n\n// This file specifically is in the Public Domain\n\n\n");
	
	fprintf(doth, "#ifndef __x64_instructions_h__\n#define __x64_instructions_h__\n\n");
	fprintf(doth, "// DO NOT EDIT: This file generated from insns.dat, originally\n//   sourced from the NASM project then modified.\n\n// This file specifically is in the Public Domain\n\n\n");
	
	fprintf(doth, "struct instruction {\n");
	fprintf(doth, "\tchar opcodes_len;\n");
	fprintf(doth, "\tchar operands_len;\n");
	fprintf(doth, "\t\n");
	fprintf(doth, "\tchar opcodes[8]; // max found to be 5 originally\n");
	fprintf(doth, "\tstruct {\n");
	fprintf(doth, "\t\tchar type;\n");
	fprintf(doth, "\t\tchar class;\n");
	fprintf(doth, "\t\tchar width;\n");
	fprintf(doth, "\t} operands[4];\n");
	fprintf(doth, "\t\n");
	fprintf(doth, "\tunsigned long flags;\n");
	fprintf(doth, "};\n\n\n");
	
	

	
	
	
	// instruction group structures
	VEC_EACH(&list, j, g) {
		fprintf(dotc, "static struct instruction instruction_group_%s_[%ld] = {\n", g->name, VEC_LEN(&g->instructions));
		
		VEC_EACHP(&g->instructions, k, i) {
			
				
			fprintf(dotc, "\t{.opcodes_len = %d, .operands_len = %d, .opcodes = {", i->opcode_len, i->oper_cnt);
			for(int m = 0; m < i->opcode_len; m++) {
				fprintf(dotc, "0x%.2X", i->opcodes[m]);
				if(m < i->opcode_len - 1) fprintf(dotc, ",");
			}
			
			fprintf(dotc, "}, .operands = {");
			
			for(int m = 0; m < i->oper_cnt; m++) {
				fprintf(dotc, "{%d, %d, %d}", i->operands[m].type, i->operands[m].class, i->operands[m].width);
				if(m < i->oper_cnt - 1) fprintf(dotc, ",");
			}
			
			fprintf(dotc, "}, .flags = 0x%lX},\n", i->flags);
		
		}
		
		fprintf(dotc, "};\n\n");
	}
	
	// instruction group meta table
	
	
	
	fprintf(doth, "struct instruction_group_index_entry {\n\tstruct instruction* table;\n\tchar* name;\n\tint group_len;\n};\n\n");
	fprintf(doth, "extern struct instruction_group_index_entry instruction_group_index[%ld];\n\n", VEC_LEN(&list));
	fprintf(doth, "struct instruction_group_index_entry* get_instruction_by_name(char* name);\n\n");
	
	fprintf(dotc, "struct instruction_group_index_entry instruction_group_index[%ld] = {\n", VEC_LEN(&list));
	VEC_EACH(&list, j, g) {
		fprintf(dotc, "\t[%d] = { .table = instruction_group_%s_, .name = \"%s\", .group_len = %ld},\n", g->name_id, g->name, g->name, VEC_LEN(&g->instructions));
	}
	fprintf(dotc, "};\n\n");
	
	
	
	// instruction enum and string lookup
	
	// static hash table
	fprintf(dotc, "static int instruction_hash_table_size = %d;\n\n", ht_sz);
	fprintf(dotc, "static struct {unsigned int hash; int instr_index; }\n");
	fprintf(dotc, "instruction_hash_table[%d] = {\n\t", ht_sz);
	for(int j = 0, k = 0; j < ht_sz; j ++) {
		if(buckets[j].instr_index == 0) continue;
		fprintf(dotc, "[0x%x] = {0x%x, %d}, ", j, buckets[j].hash, buckets[j].instr_index);
		if(++k % 5  == 0 && j != ht_sz - 1) fprintf(dotc, "\n\t");
	}
	fprintf(dotc, "\n};\n\n");
	
	fprintf(dotc, "// This function must match the function used to create the hash table above.\n");
	fprintf(dotc, "// Based on https://stackoverflow.com/questions/2351087/what-is-the-best-32bit-hash-function-for-short-strings-tag-names\n");
	fprintf(dotc, "static unsigned int hash32(char* s) {\n");
	fprintf(dotc, "\tunsigned int h = 13;\n");
	fprintf(dotc, "\t\n");
	fprintf(dotc, "\tfor(unsigned char* p = (unsigned char*)s; *p; p++) {\n");
	fprintf(dotc, "\t\th = 37 * h + *p;\n");
	fprintf(dotc, "\t}\n");
	fprintf(dotc, "\t\n");
	fprintf(dotc, "\th += (h >> 5);\n");
	fprintf(dotc, "\treturn h;\n");
	fprintf(dotc, "};\n\n\n");
	
	fprintf(dotc, "struct instruction_group_index_entry* get_instruction_by_name(char* name) {\n");
	fprintf(dotc, "\tint h = hash32(name);\n");
	fprintf(dotc, "\tint start = h %% instruction_hash_table_size;\n");
	fprintf(dotc, "\tint i = start;\n");
	fprintf(dotc, "\t\n");
	fprintf(dotc, "\tdo {\n");
	fprintf(dotc, "\t\tif(instruction_hash_table[i].hash == h) {\n");
	fprintf(dotc, "\t\t\treturn instruction_group_index + instruction_hash_table[i].instr_index;\n");
	fprintf(dotc, "\t\t}\n");
	fprintf(dotc, "\t\t\n");
	fprintf(dotc, "\t\ti = (i + 1) %% instruction_hash_table_size;\n");
	fprintf(dotc, "\t} while(i != start);\n");
	fprintf(dotc, "\t\n");
	fprintf(dotc, "\treturn NULL;\n");
	fprintf(dotc, "}\n\n\n");
	
	
	fprintf(doth, "\n\n\n#endif // __x64_instructions_h__");
	
	fclose(dotc);
	fclose(doth);
	
	
	free(buckets);
	free(src);
}





