
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#include "parser.h"
#include "codegen.h"
#include "string_int.h"
#include "sti/fs.h"





int main(int argc, char* argv[]) {
	
	string_internment_table_init(&global_string_internment_table);
	
	
	parser_ctx_t ctx = {0};
	ctx.cur_token = 0;
	
	ctx.lex = calloc(1, sizeof(*ctx.lex));
	
	ctx.lex->name = strdup("test.ic");
	ctx.lex->path = strdup("./");
	
	ctx.lex->source = readWholeFile(ctx.lex->name, &ctx.lex->src_len);
	ctx.lex->head = ctx.lex->source;
	ctx.lex->end = ctx.lex->head + ctx.lex->src_len;
	
	
	lex_process_file(ctx.lex);
	
	VEC_EACHP(&ctx.lex->tokens, i, t) {
		printf("> %s: %.*s\n", lexer_token_names[t->type], (int)t->len, t->text);
	}
	
	parse_root(&ctx);
	
	codegen_ctx_t* cgctx = calloc(1, sizeof(*cgctx));
	cgctx->symtab = ctx.symtab;
	
	cg_linearize_tu(cgctx, ctx.tu);
	
	
		
	
	return 0;
}

















