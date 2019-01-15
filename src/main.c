#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#include "bnf.h"
#include "re.h"



char* readFile(char* path, size_t* len);




int main(int argc, char* argv) {
	
// 	re_parse("ab|cd?e*f+|g");
	re_parse("abc");
// 	re_parse("a|b|cd?e*f+|g|hij");
	
	return 0;
	
	char* content = readFile("./test.bnf", NULL);
	
	bnf_parse(content);
	
	
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

