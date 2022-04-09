#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>


#include "parser.h"



//#define LEX_printf(...) printf(__VA_ARGS__)
#define LEX_printf(...) 

static token_t* lex_push_token(lexer_file_t* lf, int type);
static void lex_push_token_1(lexer_file_t* lf, int type);
static void lex_push_token_2(lexer_file_t* lf, int type);
static int lex_string_token(lexer_file_t* lf);
static void lex_next_char(lexer_file_t* lf);



#define X(x) [TOK_##x] = #x,
char* lexer_token_names[] = {
	[TOK_NONE] = "NONE",
LEXER_TOKEN_TYPES
	[TOK_MAX_VALUE] = "MAX_VALUE"
};
#undef X








void parse_root(parser_ctx_t* ctx) {
//	token_t tok;

	// look for keywords, then branch into their fns
//	next_token(ctx, &tok);
	
//	if(tok.type == TOK_IDENT && 0 == strcmp("func", tok.text)) {
//		parse_function(ctx);
//	}

}




void parse_function(parser_ctx_t* ctx) {
	
	// "func" keyword is implied to be the current token
	
	// eat a '('
	// look for comma-separated list of arguments
	// eat a ')'
	// A:
	//    eat a '('
	//    look for comma-separated list of return types
	//    eat a ')'
	// or B:
	//    eat a single return type
	// or C:
	//    find nothing
	// eat a '{'
	
	// parse function body

	// eat a  '}'

}







// out must be big enough, at least as big as in+1 just to be safe
// appends a null to out, but is also null-safe
static int decode_c_escape_str(char* in, char* out, size_t len, size_t* outLen) {
	size_t i, o;
	
	char tmp[7];
	
	for(i = 0, o = 0; i < len; i++, o++) {
		if(*in != '\\') {
			*out = *in;
			out++;
			in++;
			continue;
		}
		
		in++;
		i++;
		switch(*in) {
			case '0': *out = '\0'; break; 
			case 'r': *out = '\r'; break; 
			case 'n': *out = '\n'; break;
			case 'f': *out = '\f'; break;
			case 'a': *out = '\a'; break;
			case 'b': *out = '\b'; break;
			case 'v': *out = '\v'; break;
			case 't': *out = '\t'; break;
			case 'x': 
			
				if(len < i + 1) {
//						jp->error = JSON_PARSER_ERROR_UNEXPECTED_EOI;
					printf("JSON: EOF in hex escape sequence\n");
					return 1;
				}
				if(!isxdigit(in[1])) {
					// malformed hex code. output an 'x' and keep going.
					*out = 'x';
					break;
				}
				
				tmp[0] = in[1];	
			
			
				if(len < i + 2) {
//						jp->error = JSON_PARSER_ERROR_UNEXPECTED_EOI;
					printf("JSON: EOF in hex escape sequence\n");
					return 1;
				}
				if(!isxdigit(in[2])) {
					// malformed hex code, but we have one digit
					tmp[1] = 0;
					
					*out = strtol(tmp, NULL, 16);
					in++; i++;
					break;
				}
				else {
					tmp[1] = in[2];
					tmp[2] = 0;
					
					*out = strtol(tmp, NULL, 16);
					in += 2; i += 2;
				}					
				break;

			case 'u': 
				if(in[1] == '{') {
					int n;
					int32_t code;
					char* s;
					// seek forward to the closing '}'
					for(n = 0, s = in + 2;; n++) {
						if(i + 3 >= len) {
							printf("JSON: EOF in unicode escape sequence\n");
							return 2;
						}
						
						if(s[0] == '}') break;
						
						if(n == INT_MAX) {
							printf("JSON: malformed unicode escape sequence\n");
							return 3;
						}
						
						if(!isxdigit(s[0])) {
							printf("JSON: invalid character inside unicode escape sequence\n");
							break;
						}
						
						s++;
					}
					
					int nl = n > 6 ? 6 : n;
				
					if(n > 0) {
						strncpy(tmp, s - nl, nl);
						tmp[nl] = 0;
						code = strtol(tmp, NULL, 16);
					}
					else {
						code = 0;
					}
					
					*out = code; // todo: utf8 conversion
					in += n + 2; i += n + 2;
				}
				else {
					int n;
					int32_t code;
					char* s;
					// seek forward to the closing '}'
					for(n = 0, s = in + 1; n < 4; n++) {
						if(i + 2 >= len) {
							printf("JSON: EOF in unicode escape sequence\n");
							return 2;
						}
						
						if(!isxdigit(s[0])) {
							break;
						}
						
						s++;
					}
				
					if(n > 0) {
						strncpy(tmp, in + 1, n);
						tmp[n] = 0;
						code = strtol(tmp, NULL, 16);
					}
					else {
						code = 0;
					}
					
					*out = code; // todo: utf8 conversion
					in += n; i += n;
				}
				
				break;
				
			default:
				// pass-through
				*out = in[0];
		}

		out++;
		in++;
	}
	
	*out = '\0';
	if(outLen) *outLen = o; 
	
	return 0;
}




static int lex_string_token(lexer_file_t* lf) {
	size_t len;
//	struct json_value* val;
	char* str;
	char delim = *lf->head;
	char* se = lf->head + 1;
	
	int lines = 0;
	int char_num = lf->cur_col;
	

	// find len, count lines
	while(1) {
		
		if(*se == delim && *(se-1) != '\\') break;
		if(*se == '\0') {
//			lf->error = JSON_LEX_ERROR_NULL_IN_STRING;
			return 1;
		}
		
		if(*se == '\n') {
			lines++;
			char_num = 1;
		}
		char_num++;
		se++;
	//	printf("%d.%d\n", jl->line_num + lines, char_num);
		if(se > lf->end) {
//			lf->error = JSON_LEX_ERROR_UNEXPECTED_END_OF_INPUT;
			return 1;
		}
	}
	
	len = se - lf->head - 1;
	
	str = malloc(len+1);
	
	//if(decode_c_escape_str(lf->head + 1, str, len, NULL)) {
//		lf->error = JSON_LEX_ERROR_INVALID_STRING;
	//	return 1;
	//}
	
	LEX_printf("> STR: '%s'\n", str);
	
	token_t* tok = lex_push_token(lf, TOK_STRING);
	tok->text++;
	tok->len = len;
	
	// json value
//	val = calloc(1, sizeof(*val));
//	val->type = JSON_TYPE_STRING;
//	val->s = str;
	
//	lex_push_token_val(lf, TOKEN_STRING, val);
	
	// advance to the end of the string
	lf->head = se + 1;
	lf->cur_col = char_num + 1;
	lf->cur_line += lines;
	
	
	return 0;
}


static int lex_ident_token(lexer_file_t* lf) {
	size_t len;
//	struct json_value* val;
	char* str;
	char* se = lf->head;
	
	int char_num = lf->cur_col;


	//printf("error: %d\n", jl->error);
	// find len, count lines
	while(1) {
		if(!((*se >= 'a' && *se <= 'z')
			|| (*se >= 'A' && *se <= 'Z')
			|| (*se >= '0' && *se <= '9')
			|| *se == '_')
		) break;
		
		char_num++;
		se++;
		//printf("%d.%d\n", jl->line_num, char_num);
		if(se > lf->end) {
//			lf->error = JSON_LEX_ERROR_UNEXPECTED_END_OF_INPUT;
			return 1;
		}
	}
	
	len = se - lf->head;
	// TODO: check for null, infinity, undefined, nan
	
	str = malloc(len+1);
	strncpy(str, lf->head, len);
	str[len] = 0;
	
	int type = TOK_IDENT;
	
	
#define check_keyword(x) if(0 == strcmp(str, #x)) type = TOK_K_##x;
#define check_type(x) if(0 == strcmp(str, #x)) type = TOK_TYPE;
	
	check_keyword(func)
	check_keyword(return)
	check_type(s8)
	check_type(s16)
	check_type(s32)
	check_type(s64)
	check_type(u8)
	check_type(u16)
	check_type(u32)
	check_type(u64)
	check_type(f16)
	check_type(f32)
	check_type(f64)
	
	
	LEX_printf("> IDT: %s\n", str);
	
	// json value
//	val = calloc(1, sizeof(*val));
//	val->type = JSON_TYPE_STRING;
//	val->s = str;
	
	token_t* tok = lex_push_token(lf, type);
	tok->len = len;
	
	// advance to the end of the string
	lf->head = se;
	lf->cur_col = char_num;
	
	//printf("head %c\n", *jl->head);
	//printf("lc/line/char [%d/%d/%d]\n", jl->head - jl->source, jl->line_num, jl->char_num);
	
	return 0;
}



static int lex_number_token(lexer_file_t* lf) {
	char* start, *s, *e;
	int is_float = 0;
	int negate =0;
	int base;
	
	start = lf->head;
	
	if(*start == '-') negate = 1;
	if(*start == '+' || *start == '-') start++;
	
	s = start;
	
	// check if it's a float
	while(s < lf->end) {
		if(*s == '.' || *s == 'e' || *s == 'E')
			is_float = 1;
		
		if(*s < '0' || *s > '9') break;
		
		s++;
	} 
	
	s = start;
	
//	struct json_value* val;
//	val = malloc(sizeof(*val));
	double d;
	long l;
	
	// read the value
	if(is_float) {
		base = -1;
		d = strtod(s, &e);
//		val->type = JSON_TYPE_DOUBLE;
//		if(negate) val->d *= -1;
		LEX_printf("> FLT: %f\n", d);
	}
	else {
		if(*s == '0') {
			if(s[1] == 'x') { // hex
				base = 16;
				s += 2;
			}
			else if(s[1] == 'b') { //binary
				base = 2;
				s += 2;
			}
			else base = 8;
		}
		else base = 10;
		
		l = strtol(s, &e, base);
		LEX_printf("> INT: %ld\n", l);
//		val->type = JSON_TYPE_INT;
//		if(negate) val->n *= -1;
	}
	
//	val->base = base;
	
	token_t* tok = lex_push_token(lf, TOK_NUMBER);
	tok->len = e - lf->head;
	
	// advance to the end of the string
	lf->cur_col += e - lf->head;
	lf->head = e;
	
//	printf("head %c\n", *jl->head);
//	printf("lc/line/char [%d/%d/%d]\n", jl->head - jl->source, jl->line_num, jl->char_num);
	
	return 0;
}






static int lex_comment_token(lexer_file_t* lf) {
	char* start, *se, *str;
	char delim;
	size_t len;
	int lines, char_num;
//	struct json_value* val;
	
	lex_next_char(lf);
	
	start = se = lf->head + 1; 
	delim = *lf->head;
	
	lines = 0;
	char_num = lf->cur_col;
	
	if(delim == '/') { // single line comment
		// look for a linebreak;
		while(1) {
			if(se[0] == '\n') break;
			if(*se == '\0') {
//				lf->error = JSON_LEX_ERROR_NULL_BYTE;
				return 1;
			}
			
			char_num++;
			se++;
			
			if(se > lf->end) {
//				jl->error = JSON_LEX_ERROR_UNEXPECTED_END_OF_INPUT;
				return 1;
			}
		}
	}
	else if(delim == '*') { // multline
		// find len, count lines
		while(1) {
			if(se[0] == '*' && se[1] == '/') break;
			if(*se == '\0') {
//				lf->error = JSON_LEX_ERROR_NULL_BYTE;
				return 1;
			}
			
			if(*se == '\n') {
				lines++;
				char_num = 1;
			}
			char_num++;
			se++;
			
			if(se > lf->end) {
//				lf->error = JSON_LEX_ERROR_UNEXPECTED_END_OF_INPUT;
				return 1;
			}
		}
	}
	else {
		printf("JSON: broken comment\n");
//		lf->error = JSON_LEX_ERROR_INVALID_CHAR;
		return 1;
	}
	
	len = se - lf->head - 1;
	
#if JSON_DISCARD_COMMENTS == 0
	
//	str = malloc(len+1);
//	check_oom(str)
	
//	printf("error: %d\n", jl->error);
	
//	strncpy(str, start, len);
	
	
//printf("error: %d\n", jl->error);
	// json value
//	val = calloc(1, sizeof(*val));
//	check_oom(val)
//	printf("error: %d\n", jl->error);
//	val->type = delim == '*' ? JSON_TYPE_COMMENT_MULTI : JSON_TYPE_COMMENT_SINGLE;
//	val->v.str = str;
	
//	lex_push_token_val(jl, TOKEN_COMMENT, val);
	
#endif // JSON_DISCARD_COMMENTS
	
	// advance to the end of the string
	lf->head = se;
	lf->cur_col = char_num;
	lf->cur_line += lines;

	if(delim == '*') lex_next_char(lf);
	
//	printf("--head %c\n", *jl->head);
//	printf("lc/line/char [%d/%d/%d]\n", jl->head - jl->source, jl->line_num, jl->char_num);
	lex_next_char(lf);
	
	return 0;
}



// handles tracking line and column numbers
static void lex_next_char(lexer_file_t* lf) {
	if(*lf->head == '\n') {
		lf->cur_line++;
		lf->cur_col = 0;
	}
	else {
		lf->cur_col++;
	}
	
	lf->head++;
	if(lf->head > lf->end) {
		lf->eof = 1;
	}
}

static token_t* lex_push_token(lexer_file_t* lf, int type) {
	VEC_INC(&lf->tokens);
	
	token_t* t = &VEC_TAIL(&lf->tokens);
	t->type = type;
	t->text = lf->head;
	t->len = 0;
	t->file = lf;
	t->line_num = lf->cur_line;
	t->col_num = lf->cur_col;
	
//	lf->unfinished_token = 0;
	return t;
}

static void lex_push_token_1(lexer_file_t* lf, int type) {
	VEC_INC(&lf->tokens);
	
	token_t* t = &VEC_TAIL(&lf->tokens);
	t->type = type;
	t->text = lf->head;
	t->len = 1;
	t->file = lf;
	t->line_num = lf->cur_line;
	t->col_num = lf->cur_col;
	
	LEX_printf("> TOK: %c\n", *t->text);
	
//	lf->unfinished_token = 0;
	lex_next_char(lf);
}

// this version also eats the next character
static void lex_push_token_2(lexer_file_t* lf, int type) {
	VEC_INC(&lf->tokens);
	
	token_t* t = &VEC_TAIL(&lf->tokens);
	t->type = type;
	t->text = lf->head;
	t->len = 2;
	t->file = lf;
	t->line_num = lf->cur_line;
	t->col_num = lf->cur_col;
	
	
	LEX_printf("> TOK: %c%c\n", t->text[0], t->text[1]);
	
	lf->unfinished_token = 0;
	lex_next_char(lf);
	lex_next_char(lf);
}

int lex_process_file(lexer_file_t* lf) {
	
	
	//jl->gotToken = 0;
	
	while(lf->head < lf->end) {
		char c = *lf->head;
		
		//printf("char: %c\n", c);
		
		switch(c) {
			case '(': lex_push_token_1(lf, TOK_LPAREN); break;
			case ')': lex_push_token_1(lf, TOK_RPAREN); break;
			case '{': lex_push_token_1(lf, TOK_LBRACE); break;
			case '}': lex_push_token_1(lf, TOK_RBRACE); break;
			case '[': lex_push_token_1(lf, TOK_LBRACKET); break;
			case ']': lex_push_token_1(lf, TOK_RBRACKET); break;
			case ';': lex_push_token_1(lf, TOK_SEMI); break;
			case '*': lex_push_token_1(lf, TOK_STAR); break;
			case ',': lex_push_token_1(lf, TOK_COMMA); break;
			case ':': lex_push_token_1(lf, TOK_COLON); break;
			case '=': 
				if(lf->head[1] != '=') lex_push_token_1(lf, TOK_EQUAL); 
				else lex_push_token_2(lf, TOK_EQUALEQUAL); 
				break;
			
			case '/': lex_comment_token(lf); break;
			
			case '\'':
			case '"':
			case '`':
				lex_string_token(lf);
				break;
			
			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9':
			case '-': case '+': case '.':
				lex_number_token(lf);
				break;
			
			case ' ':
			case '\t':
			case '\r':
			case '\f':
			case '\v':
			case '\n':
				lex_next_char(lf);
				break;
				
			default:
				if(isalpha(c) || c == '_') {
					lex_ident_token(lf);
					break;
				}
				
				if(c == 0) {
					return 1; // end of file
				}
				
				// lex error
			//	jl->error = JSON_LEX_ERROR_INVALID_CHAR;
				return 1;
		}
		
		//printf("lol\n");
		
		
	}
	
	//printf("token %d:%d ", jl->line_num, jl->char_num);
//	dbg_print_token(&jl->cur_tok);
	
	//jl->eoi = jl->head >= jl->end;
	
//	if(jl->error) return jl->error;
//	return jl->eoi;
	return 0;
}
