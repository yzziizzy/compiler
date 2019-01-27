#ifndef __compiler_re_h__
#define __compiler_re_h__




typedef void* re_table; 
typedef void* re_nfa; 



re_nfa re_nfa_from_string(char* source);

void re_mark_terminal(re_nfa _f, int tag);

re_table re_compile_nfa(re_nfa _n);
void re_dfa_match(re_table _d);


#endif // __compiler_re_h__
