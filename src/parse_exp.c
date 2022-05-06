








ast_expr_t* parse_expr(parser_ctx_t* ctx) { PARSE_DEBUG_START();
	token_t* t, *t1;
	ast_expr_t* e = NULL;
	symbol_t* s;

	
//	t = cur_token(ctx);
	t = cur_token(ctx);
	
	
	switch(t->type) {
		case TOK_STRING:
		case TOK_NUMBER:
			e = calloc(1, sizeof(*e));
			e->type = 'l';
			
			s = insert_symbol(ctx, NULL);
			e->sym = s->id;
			
			
			s->ptr_lvl = -1;
			s->value.l = strtol(t->text, NULL, 10);
			s->type = 'l';
			
			ctx->cur_token++;
			break;
			
		case TOK_IDENT:
			// it's a variable or a function call
			// peek ahead to figure it out
			t1 = peek_token(ctx, 1);
			if(t1->type == TOK_DOT) {
				// struct member reference
			}
			else if(t1->type == TOK_LPAREN) {
				// function call
				
			}
			else {
				// probably just a variable
				e = calloc(1, sizeof(*e));
				e->type = 's';
				
				s = imply_symbol(ctx, t->text);
				e->sym = s->id;
				
				ctx->cur_token++;
			}
			break;
		
	}	
		
	PARSE_DEBUG_END();
	return e;
}







