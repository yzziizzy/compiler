#ifndef __compiler_bnf_h__
#define __compiler_bnf_h__



#include "ds.h"


enum bnf_exp_type {
	BNF_EXP_RULE,
	BNF_EXP_STR,
	BNF_EXP_CAT,
	BNF_EXP_ALT,
	BNF_EXP_REP,
	BNF_EXP_OPT,
};




typedef struct bnf_exp {
	enum bnf_exp_type type;
	VEC(struct bnf_exp*) kids;
	
	union {
		char* content;
		struct bnf_exp* exp;
	}
} bnf_exp;

typedef struct bnf_rule {
	char* name;
	
	bnf_exp* def;
	
	char is_terminal;
} bnf_rule;




void bnf_parse(char* source);



#endif // __compiler_bnf_h__
