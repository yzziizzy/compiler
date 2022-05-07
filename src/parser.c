#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>


#include "parser.h"
#include "string_int.h"



//#define LEX_printf(...) printf(__VA_ARGS__)
#define LEX_printf(...) 

#define P_printf(...) printf(__VA_ARGS__)
//#define P_printf(...) 


int _DEBUG_parse_lvl = 0;

#define PARSE_DEBUG_START(...) do{ \
	printf("%*s fn: %s [%ld:%ld: '%.*s' (%s)]\n", _DEBUG_parse_lvl, " ", __func__, \
		ctx->lex->tokens.data[ctx->cur_token].line_num, \
		ctx->lex->tokens.data[ctx->cur_token].col_num, \
		(int)ctx->lex->tokens.data[ctx->cur_token].len, \
		ctx->lex->tokens.data[ctx->cur_token].text, \
		lexer_token_names[ctx->lex->tokens.data[ctx->cur_token].type] \
		); \
	_DEBUG_parse_lvl+=2; \
}while(0);

#define PARSE_DEBUG_END(...) do{_DEBUG_parse_lvl-=2;}while(0);

int find_sym_id(ast_scope_info_t* si, char* name);
symbol_t* insert_symbol(parser_ctx_t* ctx, char* name);
symbol_t* imply_symbol(parser_ctx_t* ctx, char* name);

static void push_scope(parser_ctx_t* ctx);
static void pop_scope(parser_ctx_t* ctx);


static token_t* lex_push_token(lexer_file_t* lf, int type);
static void lex_push_token_1(lexer_file_t* lf, int type);
static void lex_push_token_2(lexer_file_t* lf, int type);
static int lex_string_token(lexer_file_t* lf);
static void lex_next_char(lexer_file_t* lf);


#define X(x) ast_##x##_t* parse_##x(parser_ctx_t* ctx);
	AST_TYPE_LIST
#undef X



#define X(x) [TOK_##x] = #x,
char* lexer_token_names[] = {
	[TOK_NONE] = "NONE",
LEXER_TOKEN_TYPES
	[TOK_MAX_VALUE] = "MAX_VALUE"
};
#undef X


#define X(x) [AST_TYPE_##x] = #x,
char* ast_type_names[] = {
	[AST_TYPE_NONE] = "NONE",
AST_TYPE_LIST
	[AST_MAX_VALUE] = "MAX_VALUE"
};
#undef X



token_t* cur_token(parser_ctx_t* ctx) {
	if(ctx->cur_token > VEC_LEN(&ctx->lex->tokens)) return NULL; // BUG: should return a special invalid EOF token
	return &VEC_ITEM(&ctx->lex->tokens, ctx->cur_token);
}


token_t* next_token(parser_ctx_t* ctx) {
	ctx->cur_token++;
	
	if(ctx->cur_token > VEC_LEN(&ctx->lex->tokens)) return NULL; // BUG: should return a special invalid EOF token
	return &VEC_ITEM(&ctx->lex->tokens, ctx->cur_token);
}

token_t* peek_token(parser_ctx_t* ctx, int advance) {
	if(ctx->cur_token + advance > VEC_LEN(&ctx->lex->tokens)) return NULL; // BUG: should return a special invalid EOF token
	return &VEC_ITEM(&ctx->lex->tokens, ctx->cur_token + advance);
}



#define EXPECT(_t) \
	if(t->type != _t) { \
		P_printf("Expected %s at line %ld:%ld, found %s\n", lexer_token_names[_t], t->line_num, t->col_num, lexer_token_names[t->type]); \
		exit(1); \
	} \
	

#define EXPECT_MSG(_t, msg) \
	if(t->type != _t) { \
		P_printf("Expected " msg " at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]); \
		exit(1); \
	} \
	
	
#define EAT(_t) \
	EXPECT(_t) \
	t = next_token(ctx);



void parse_root(parser_ctx_t* ctx) {
	token_t* t;
	
	ctx->tu = calloc(1, sizeof(*ctx->tu));
	ctx->symtab = calloc(1, sizeof(*ctx->symtab));
	ctx->tu->symtab = ctx->symtab;
	
	// create the global scope
	push_scope(ctx);
	
	insert_symbol(ctx, NULL); // TEMP: occupy symbol id 0 for debugging clarity
	
	while(1) {
		t = cur_token(ctx);
		
		if(t->type == TOK_func) {
			ast_func_t* fn = parse_func(ctx);
			VEC_PUSH(&ctx->tu->fns, fn);
		}
		
		break;
		
		if(ctx->cur_token >= VEC_LEN(&ctx->lex->tokens)) break;
	}
}


symbol_t* parse_literal_(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	symbol_t* s;
//	ast_literal_t* lit;
	
//	lit = calloc(1, sizeof(*lit));
	
	s = insert_symbol(ctx, NULL);
	s->ptr_lvl = -1;

	t = cur_token(ctx);
	if(t->type == TOK_NUMBER) {
//		lit->value = strtol(t->text, NULL, 10);
		s->value.l = strtol(t->text, NULL, 10);
		s->type = 'l';
			
		ctx->cur_token++;
	}
	else {
//		free(lit);
//		lit = NULL;
		ctx->cur_token++;
	}

	PARSE_DEBUG_END();
	return s;
}


ast_arg_t* parse_arg(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	fprintf(stderr, "parse_arg NYI\n");
	PARSE_DEBUG_END();
	return NULL;
}

ast_type_t* parse_type(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	
	t = peek_token(ctx, 0);
	if(t->type != TOK_TYPE) {
		P_printf("Expected type\n");
		return NULL;
	}
	
	ast_type_t* rt = calloc(1, sizeof(*rt));
	rt->type = t->text[0];
	
	while(1) {
		t = next_token(ctx);
		if(t->type == TOK_STAR) rt->ptr_lvl++;
		else break;
	}
	
	PARSE_DEBUG_END();
	return rt;
}




ast_var_decl_t* parse_var_decl(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	ast_var_decl_t* v;
	ast_type_t* type;
	symbol_t* s;

	// grab the type
	type = parse_type(ctx);
	if(!type) return NULL;
	t = cur_token(ctx);
	
	v = calloc(1, sizeof(*v));
	
	// grab the name
	if(t->type != TOK_IDENT) {
		P_printf("Expected variable name at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	
	s = insert_symbol(ctx, t->text);
	s->type = type->type;
	s->width = type->width;
	s->ptr_lvl = type->ptr_lvl;
	free(type);
	
	v->sym = s->id;
	
	t = next_token(ctx);
	
	// check for an initialization
	if(t->type == TOK_EQUAL) {
		t = next_token(ctx);
		
		v->init = parse_expr(ctx);
		
	}
	
	PARSE_DEBUG_END();
	return v;
}



// TODO: this is actually an expression
ast_stmt_call_t* parse_stmt_call(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	ast_stmt_call_t* call;
	
	call = calloc(1, sizeof(*call));
	
	t = cur_token(ctx);
	
	
	// function name, possibly with a sigil
	EXPECT_MSG(TOK_IDENT, "function name")
	
	symbol_t* s = insert_symbol(ctx, t->text);
	call->name = s;
	
	if(t->text[0] == '@') {
		call->convention = 's'; // syscall, temporary syntax
//		if(l == 0) {
//			P_printf("Expected function name, found lone '$' at line %ld:%ld\n", t->line_num, t->col_num);
//			exit(1);
//		}
	}
	
	t = next_token(ctx);
	
	// eat a '('	
	EAT(TOK_LPAREN)
	
	// argument list
	while(1) {
		ast_expr_t* e;
		
		if(t->type == TOK_RPAREN) break;
		
		e = parse_expr(ctx);
		if(!e) {
			P_printf("Expected expression in argument list at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
			exit(1);
		}
		
		VEC_PUSH(&call->args, e);
		
		t = cur_token(ctx);
		
		if(t->type == TOK_RPAREN) break;
		EAT(TOK_COMMA)
	}
	
	// eat a ')'
	EAT(TOK_RPAREN)
	

	PARSE_DEBUG_END();
	return call;
}

ast_stmt_t* parse_stmt(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t, *t2;
	ast_stmt_t* st;
	
	st = calloc(1, sizeof(*st));
	
	t = cur_token(ctx);
	//printf("t = %s\n", lexer_token_names[t->type]);
	if(t->type == TOK_LBRACE) {
		// block
		st->type = AST_TYPE_block;
		st->block = parse_block(ctx);
	}
	else if(t->type == TOK_TYPE) {
		// declaration
		st->type = AST_TYPE_var_decl;
		st->var_decl = parse_var_decl(ctx);
	}
	else if(t->type == TOK_return) {
		// return statement
		st->type = AST_TYPE_stmt_return;
		st->stmt_return = parse_stmt_return(ctx);
	}
	else if(t->type == TOK_IDENT) {
		t2 = peek_token(ctx, 1);
		
		// maybe a function call
		if(t2->type == TOK_LPAREN) {
			
			st->type = AST_TYPE_stmt_call;
			st->stmt_call = parse_stmt_call(ctx);
		}
		else {
		
			// assignments
			st->type = AST_TYPE_stmt_assign;
			st->stmt_assign = calloc(1, sizeof(*st->stmt_assign));
			
			// expect an ident
			t = cur_token(ctx);

			EXPECT_MSG(TOK_IDENT, "lvalue")
			symbol_t* r = imply_symbol(ctx, t->text);
			st->stmt_assign->lval = r->id;
			st->stmt_assign->rval = calloc(1, sizeof(*st->stmt_assign->rval));;
			t = next_token(ctx);
			
			// eat an =
			EAT(TOK_EQUAL)
			
			if(t->type == TOK_IDENT) {
				st->stmt_assign->rval->type = 'a';
				st->stmt_assign->rval->arith = calloc(1, sizeof(*st->stmt_assign->rval->arith));
				
				// expect an ident
				EXPECT_MSG(TOK_IDENT, "rvalue")
				symbol_t* a = imply_symbol(ctx, t->text);
				st->stmt_assign->rval->arith->a = a->id;
				t = next_token(ctx);
				
				// eat a +
				EAT(TOK_PLUS)
				st->stmt_assign->rval->arith->op = '+';
				
				// expect an ident
				EXPECT_MSG(TOK_IDENT, "rvalue")
				symbol_t* b = imply_symbol(ctx, t->text);
				st->stmt_assign->rval->arith->b = b->id;
				t = next_token(ctx);
			}
			else {
				st->stmt_assign->rval->type = 's';
				
				EXPECT_MSG(TOK_NUMBER, "number")
				symbol_t* b = insert_symbol(ctx, t->text);
				st->stmt_assign->rval->sym = b->id;
				t = next_token(ctx);
			}
		}
	}
	else {
		P_printf("Expected statement at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	
	// try to eat a semicolon
	t = cur_token(ctx);
	if(t->type != TOK_SEMI) {
		P_printf("Expected semicolon at end of statement at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);				
	}
	ctx->cur_token++;
	
	PARSE_DEBUG_END();
	return st;
}



ast_stmt_return_t* parse_stmt_return(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	ast_stmt_return_t* r;
	
	r = calloc(1, sizeof(*r));
	
	// eat the return keyword
	t = next_token(ctx);
	
	while(1) {
		ast_expr_t* e = parse_expr(ctx);
		if(e) {
			VEC_PUSH(&r->values, e);
		}
		t = cur_token(ctx);
		
		
		// eat the comma or semicolon
		if(t->type == TOK_SEMI) break;
		if(t->type != TOK_COMMA) {
			P_printf("Expected comma or semicolon in return value list at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
			exit(1);				
		}
		t = next_token(ctx);
	}
	
	//ctx->cur_token++;
	
	PARSE_DEBUG_END();
	return r;
}


ast_block_t* parse_block(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	ast_block_t* b;
	
	b = calloc(1, sizeof(*b));
	
	// eat the opening '{'
	t = cur_token(ctx);
	if(t->type != TOK_LBRACE) {
		P_printf("Expected lbrace at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	t = next_token(ctx);
	
	
	// set up a new scope
	push_scope(ctx);
	b->scope = ctx->cur_scope;
		
	// parse list of statements
	do {
		ast_stmt_t* st = parse_stmt(ctx);
		VEC_PUSH(&b->statements, st);
		
		t = cur_token(ctx);
	} while(t->type != TOK_RBRACE);

	
	pop_scope(ctx);
		

	// eat a  '}'
//	t = cur_token(ctx);
	if(t->type != TOK_RBRACE) {
		P_printf("Expected rbrace at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	ctx->cur_token++;
	
	PARSE_DEBUG_END();
	return b;
}

ast_func_t* parse_func(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t;
	ast_type_t* rt;
	
	ast_func_t* func = calloc(1, sizeof(*func));
	
	
	// "func" keyword is implied to be the current token
	ctx->cur_token++;
	
	// A:
	//    eat a '('
	//    look for comma-separated list of return types
	//    eat a ')'
	// or B:
	//    eat a single return type
	
	t = peek_token(ctx, 0);
	if(t->type == TOK_LPAREN) {
		t = next_token(ctx); // eat the paren
		
		// look for list of multiple return types
		do {
			
			rt = parse_type(ctx);
			if(!rt) {
				t = cur_token(ctx);
				if(t->type != TOK_RPAREN) {
					P_printf("Expected type at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
					exit(1);
				}
				else break;
			}
			
			VEC_PUSH(&func->return_types, rt);
			
			t = cur_token(ctx);
			if(t->type == TOK_RPAREN) break;
			else if(t->type == TOK_COMMA) ctx->cur_token++; // eat the comma
			else {
				P_printf("Expected comma or rparen at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
				exit(1);
			}
			
		} while(1);
		ctx->cur_token++;
	}
	else if(t->type == TOK_TYPE) {
		// single return type
		rt = parse_type(ctx);
		if(!rt) {
			P_printf("Expected type at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
			exit(1);
		}
		
		VEC_PUSH(&func->return_types, rt);
	}
	else {
		P_printf("Unexpected %s at line %ld:%ld\n", lexer_token_names[t->type], t->line_num, t->col_num);
		exit(1);
		
		ctx->cur_token++;
	}
	t = cur_token(ctx)
	
	
	// find function name
	;
	if(t->type != TOK_IDENT) {
		P_printf("Expected function name at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	
	func->name = strnint(t->text, t->len);
	t = next_token(ctx);
	
	
	// eat a '('
	// look for comma-separated list of arguments
	// eat a ')'
	
	if(t->type != TOK_LPAREN) {
		P_printf("Expected lparen name at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
		exit(1);
	}
	t = next_token(ctx);
	
	
	// look for list of arguments
	do {
		if(t->type == TOK_RPAREN) break; // check for empty arg list or dangling comma scenario
		
		ast_arg_t* arg;
		arg = calloc(1, sizeof(*arg));
		
		// grap the type
		rt = parse_type(ctx);
		if(!rt) {
			t = cur_token(ctx);
			if(t->type != TOK_RPAREN) {
				P_printf("Expected type at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
				exit(1);
			}
			else break;
		}
		arg->type = rt;
		
		t = cur_token(ctx);
		
		// grab the name
		if(t->type != TOK_IDENT) {
			P_printf("Expected argument name at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
			exit(1);
		}
		
		arg->name = strnint(t->text, t->len);
		arg->name_len = t->len;
		t = next_token(ctx);
		
		// check for comma and or of arg list
		if(t->type == TOK_RPAREN) break;
		else if(t->type == TOK_COMMA) ctx->cur_token++; // eat the comma
		else {
			P_printf("Expected comma or rparen at line %ld:%ld, found %s\n", t->line_num, t->col_num, lexer_token_names[t->type]);
			exit(1);
		}
		
	} while(1);
	t = next_token(ctx);

	
	// parse the function body
	func->body = parse_block(ctx);
	

	PARSE_DEBUG_END();
	return func; 
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
			|| *se == '_' || *se == '@')
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
	
	
	int type = TOK_IDENT;
	
	str = strnint(lf->head, len);
	
#define check_keyword(x) if(0 == strcmp(str, #x)) type = TOK_##x;
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
	tok->text = str;
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
	tok->text = strnint(lf->head, tok->len);
	
	
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
	t->text = NULL;
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
	t->text = strnint(lf->head, 1);
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
	t->text = strnint(lf->head, 2);
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
	
	lf->cur_line = 1;
	
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
			case '+': lex_push_token_1(lf, TOK_PLUS); break;
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
			case '-': case '.':
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
				if(isalpha(c) || c == '_' || c == '@') {
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



int find_sym_id(ast_scope_info_t* si, char* name) {
	
	VEC_EACHP(&si->name_lookup, i, p) {
		if(p->name == name) return p->symbol_id;
	}
	
	if(!si->parent) return 0;
	
	return find_sym_id(si->parent, name);
}

symbol_t* get_symbol(symbol_table_t* t, int id) {
	return &VEC_ITEM(&t->symbols, id);
}

ast_name_info_t* get_scoped_symbol_info(ast_scope_info_t* si, int id) {
	VEC_EACHP(&si->name_lookup, i, ni) {
		if(ni->symbol_id == id) return ni;
	}
	
	return NULL;
}

symbol_t* insert_symbol(parser_ctx_t* ctx, char* name) {
	symbol_t* s;
	ast_scope_info_t* si = ctx->cur_scope;
	
	VEC_INC(&ctx->symtab->symbols);
	s = &VEC_TAIL(&ctx->symtab->symbols);
	
	*s = (symbol_t){0};
	s->id = VEC_LEN(&ctx->symtab->symbols) - 1;
//	printf("inserting new symbol [%d]%s\n", s->id, name);
	
	if(name) {
		s->name = name;
		VEC_INC(&si->name_lookup);
		VEC_TAIL(&si->name_lookup).symbol_id = s->id;
		VEC_TAIL(&si->name_lookup).name = name;
	}
	
	return s;
}

symbol_t* imply_symbol(parser_ctx_t* ctx, char* name) {
	symbol_t* s = NULL;
	int id = find_sym_id(ctx->cur_scope, name);
	
	if(id <= 0) {
		s = insert_symbol(ctx, name);
		s->flags |= SYM_UNBOUND;
//		printf("creating unbound symbol [%d]%s\n", id, s->name);
	}
	else {
		s = get_symbol(ctx->symtab, id);
//		printf("found implied symbol [%d]%s\n", id, s->name);
	}
	
	return s;
}

static void push_scope(parser_ctx_t* ctx) {
	ast_scope_info_t* s = calloc(1, sizeof(*ctx->cur_scope));
	s->parent = ctx->cur_scope;
	s->table = ctx->symtab;
	ctx->cur_scope = s;
}

static void pop_scope(parser_ctx_t* ctx) {
	if(ctx->cur_scope) ctx->cur_scope = ctx->cur_scope->parent;
}


// evil? perhaps.
#include "parse_exp.c"

