#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#include "bnf.h"
#include "re.h"
#include "lexer.h"



char* readFile(char* path, size_t* len);




int main(int argc, char* argv) {
	
// 	lexer();
	/*
	PointerSet* ps = calloc(1, sizeof(*ps));
	PointerSet* ps2 = calloc(1, sizeof(*ps2));
	
	PointerSet_insert(ps, 0x00004);
	PointerSet_insert(ps, 0x00002);
	PointerSet_insert(ps, 0x00003);
	PointerSet_insert(ps, 0x00008);
	PointerSet_insert(ps, 0x00008);
	PointerSet_insert(ps, 0x00001);
	PointerSet_insert(ps2, 0x00003);
	PointerSet_insert(ps2, 0x00008);
	PointerSet_insert(ps2, 0x00007);
	PointerSet_insert(ps2, 0x00002);
	PointerSet_insert(ps2, 0x00008);
	PointerSet_print(ps);
	PointerSet_print(ps2);
	PointerSet* ps3 = PointerSet_intersect(ps, ps2);
	PointerSet_print(ps3);
	PointerSet* ps4 = PointerSet_union(ps, ps2);
	PointerSet_print(ps4);
	PointerSet* ps5 = PointerSet_difference(ps, ps2);
	PointerSet_print(ps5);
	PointerSet_union_inplace(ps5, ps3);
	PointerSet_print(ps5);
	*/
// 	return 0;
	re_nfa n = re_nfa_from_string("a(bc|BC)");
	
	re_compile_nfa_2(n);
	
	re_match(NULL, "abc");
	re_match(NULL, "ab");
	re_match(NULL, "abd");
	re_match2(NULL, "abc");
	re_match2(NULL, "ab");
	re_match2(NULL, "abd");
// 	re_parse("ab|cd");
// 	re_parse("ab|cd?e*f+|g");
//	re_parse("abbbq?c|df");
// 	re_parse("a|b|cd?e*f+|g|hij");
	
	return 0;
	
// 	char* content = readFile("./test.bnf", NULL);
	
// 	bnf_parse(content);
	
	
}


char* readFile(char* path, size_t* len) {
	FILE* f;
	size_t fsz;
	char* contents;
	size_t nr;
	
	
	f = fopen(path, "rb");
	if(!f) {
		fprintf(stderr, "Could not read file: \"%s\"\n", path);
		return NULL;
	}

	
	// check file size
	fseek(f, 0, SEEK_END);
	fsz = ftell(f);
	fseek(f, 0, SEEK_SET);
	
	contents = malloc(fsz+1);
	contents[fsz] = 0; // some crt functions might read past the end otherwise
	
	nr = fread(contents, 1, fsz, f);
	if(nr != fsz) {
		fprintf(stderr, "Warning: File read did not match file size: %ld != %ld, \"%s\"\n", nr, fsz, path);
	}

	if(len) *len = fsz;
	
	return contents;
}

