#ifndef __compiler_re_h__
#define __compiler_re_h__

#include "sti/sti.h"

typedef void* re_table; 
typedef void* re_nfa; 

#define shp(p) ((intptr_t)p & 0xffffff)






#define NFA_E (0)
#define NFA_MATCH (INT_MAX)
#define NFA_SPLIT (INT_MAX - 1)
#define NFA_OP_CAT (INT_MAX - 2)
#define NFA_ANY (INT_MAX - 3)

#define NFA_MAX (INT_MAX - 10)


// nodes of the nfa graph
typedef struct nfa_state {
	int c; // c is the input needed to get to this node
	struct nfa_state* out[2];
} nfa_state;


// type magic to store the output pointer list inside the out[2] pointers in nfa_state
union frag_out {
	union frag_out* next;
	nfa_state* state;
	nfa_state** pstate;
};

// container to hold the root nfa_state pointer and the start of the output linked list.
// also holds a user-defined "tag" for later processing.
typedef struct nfa_frag {
	
	nfa_state* start;
	
	union frag_out out;
	
	int tag;
	
} nfa_frag;


struct nfa_state_set;

typedef struct nfa_state_set_edge {
	int c;
	struct nfa_state_set* target;
} nfa_state_set_edge;


typedef struct nfa_state_set {
// 	int c;
	
	char has_start;
	char has_terminal;
	
	// todo: pull tags through?
	intSet out_chars;// cache for building the dfa
	PointerSet states;
	
	VEC(nfa_state_set_edge) edges;
	
	// for table construction 
	int stateIndex;
	
	
} nfa_state_set;


typedef struct re_table1 {
	int c;
	int next;
} re_table1;



// old





typedef struct nfa_table_edge {
	int start;
	int c;
	int dest;
	
	char is_start;
	char is_terminal;
	
	int dfa_state;
} nfa_table_edge;



typedef struct dfa_edge {
	int start;
	int c;
	int dest;
} dfa_edge;


typedef struct dfa_set {
	int dfa_state;
	int nfa_state;
} dfa_set;


typedef struct dfa_pair {
	int dfa_state;
	int nfa_state;
} dfa_pair;


typedef struct dfa_state_info {
	int state_num;
	int renamed_to;
	
	char is_terminal;
	
	VEC(int) nfa_states;
} dfa_state_info;








re_nfa re_nfa_from_string(char* source);

// void re_mark_terminal(re_nfa _f, int tag);

re_table re_compile_nfa(re_nfa _n);
void re_dfa_match(re_table _d);

int re_match(void* regex, char* str);
int re_match2(void* regex, char* str);


#endif // __compiler_re_h__
