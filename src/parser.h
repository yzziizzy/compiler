
#include <stddef.h>


#include "sti/vec.h"


#define LEXER_TOKEN_TYPES \
	X(EOF) \
	X(INVALID) \
	X(DOT) \
	X(LPAREN) \
	X(RPAREN) \
	X(LBRACE) \
	X(RBRACE) \
	X(LBRACKET) \
	X(RBRACKET) \
	X(SEMI) \
	X(COLON) \
	X(COMMA) \
	X(STAR) \
	X(EQUAL) \
	X(EQUALEQUAL) \
	X(IDENT) \
	X(NUMBER) \
	X(STRING) \
	X(TYPE) \
	\
	X(K_func) \
	X(K_return) \


#define X(x) TOK_##x,
enum {
	TOK_NONE = 0,
LEXER_TOKEN_TYPES
	TOK_MAX_VALUE
};
#undef X


extern char* lexer_token_names[];


struct lexer_file;

typedef struct {
	int type;
	char* text;
	size_t len;
	
	struct lexer_file* file;
	size_t line_num, col_num;
} token_t;


typedef struct lexer_file {
	char* name;
	char* path;
	
	char* source;
	size_t src_len;
	char* head, *end;
	
	size_t cur_line, cur_col;
	char eof, unfinished_token;
	
	int error;
	
	VEC(token_t) tokens;
	
} lexer_file_t;



typedef struct {

	
	lexer_file_t* lex;

} parser_ctx_t;





int lex_process_file(lexer_file_t* lf);













