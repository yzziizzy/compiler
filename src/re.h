#ifndef __compiler_re_h__
#define __compiler_re_h__




typedef void* re_table; 
typedef void* re_nfa; 








#define NFA_E (0)
#define NFA_MATCH (INT_MAX)
#define NFA_SPLIT (INT_MAX - 1)
#define NFA_OP_CAT (INT_MAX - 2)
#define NFA_ANY (INT_MAX - 3)

#define NFA_MAX (INT_MAX - 10)


typedef struct nfa_state {
	int c;
	struct nfa_state* out[2];
} nfa_state;


union frag_out {
	union frag_out* next;
	nfa_state* state;
	nfa_state** pstate;
};


typedef struct nfa_frag {
	
	nfa_state* start;
	
	union frag_out out;
	
	int tag;
	
} nfa_frag;


typedef struct nfa_table_edge {
	int start;
	int c;
	int dest;
	
	char is_start;
	char is_terminal;
	
	int dfa_state;
} nfa_table_edge;






re_nfa re_nfa_from_string(char* source);

// void re_mark_terminal(re_nfa _f, int tag);

re_table re_compile_nfa(re_nfa _n);
void re_dfa_match(re_table _d);


#endif // __compiler_re_h__
