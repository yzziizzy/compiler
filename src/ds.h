#ifndef __DS_H__
#define __DS_H__

#include <stdint.h>
#include <malloc.h>
#include <string.h>

#include <stdatomic.h>
#include <pthread.h>


// patch for old versions of glibc
#ifndef qsort_r
	typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
	void ___patch_quicksort_r (void *const pbase, size_t total_elems, size_t size, __compar_d_fn_t cmp, void *arg);
	#define qsort_r ___patch_quicksort_r
#endif

// -----------------------
// non-thread-safe vectors
// -----------------------

// declare a vector
#define VEC(t) \
struct { \
	size_t len, alloc; \
	t* data; \
}

// initialisze a vector
#define VEC_INIT(x) \
do { \
	(x)->data = NULL; \
	(x)->len = 0; \
	(x)->alloc = 0; \
} while(0)


// helpers
#define VEC_LEN(x) ((x)->len)
#define VEC_ALLOC(x) ((x)->alloc)
#define VEC_DATA(x) ((x)->data)
#define VEC_ITEM(x, i) (VEC_DATA(x)[(i)])

#define VEC_TAIL(x) (VEC_DATA(x)[VEC_LEN(x)-1])
#define VEC_HEAD(x) (VEC_DATA(x)[0])

#define VEC_FIND(x, ptr_o) vec_find(VEC_DATA(x), VEC_LEN(x), sizeof(*VEC_DATA(x)), ptr_o)

#define VEC_TRUNC(x) (VEC_LEN(x) = 0)
//  

#define VEC_GROW(x) vec_resize((void**)&VEC_DATA(x), &VEC_ALLOC(x), sizeof(*VEC_DATA(x)))

// check if a size increase is needed to insert one more item
#define VEC_CHECK(x) \
do { \
	if(VEC_LEN(x) >= VEC_ALLOC(x)) { \
		VEC_GROW(x); \
	} \
} while(0)


// operations

// increase size and assign the new entry
#define VEC_PUSH(x, e) \
do { \
	VEC_CHECK(x); \
	VEC_DATA(x)[VEC_LEN(x)] = (e); \
	VEC_LEN(x)++; \
} while(0)

// increase size but don't assign
#define VEC_INC(x) \
do { \
	VEC_CHECK(x); \
	VEC_LEN(x)++; \
} while(0)

#define VEC_PREPEND(x, e) \
do { \
	VEC_CHECK(x); \
	memmove( \
		VEC_DATA(x) + 1, \
		VEC_DATA(x), \
		VEC_LEN(x) * sizeof(*VEC_DATA(x)) \
	); \
	VEC_DATA(x)[0] = (e); \
	VEC_LEN(x)++; \
} while(0)

#define VEC_PEEK(x) VEC_DATA(x)[VEC_LEN(x) - 1]

#define VEC_POP(x, e) \
do { \
	VEC_CHECK(x); \
	(e) = VEC_PEEK(x); \
	VEC_LEN(x)--; \
} while(0)

#define VEC_POP1(x) \
do { \
	VEC_CHECK(x); \
	VEC_LEN(x)--; \
} while(0)


// ruins order but is O(1). meh.
#define VEC_RM(x, i) \
do { \
	if(VEC_LEN(x) < (i)) break; \
	VEC_ITEM(x, i) = VEC_PEEK(x); \
	VEC_LEN(x)--; \
} while(0)

// preserves order. O(n)
#define VEC_RM_SAFE(x, i) \
do { \
	if(VEC_LEN(x) < (i)) break; \
	memmove( \
		VEC_DATA(x) + ((i) * sizeof(*VEC_DATA(x))), \
		VEC_DATA(x) + (((i) + 1) * sizeof(*VEC_DATA(x))), \
		VEC_LEN(x) - (((i) - 1) * sizeof(*VEC_DATA(x))) \
	); \
	VEC_LEN(x)--; \
} while(0)


// TODO: vec_set_ins // sorted insert
// TODO: vec_set_rem
// TODO: vec_set_has

// TODO: vec_purge // search and delete of all entries

#define VEC_FREE(x) \
do { \
	if(VEC_DATA(x)) free(VEC_DATA(x)); \
	VEC_DATA(x) = NULL; \
	VEC_LEN(x) = 0; \
	VEC_ALLOC(x) = 0; \
} while(0)

#define VEC_COPY(copy, orig) \
do { \
	void* tmp; \
	tmp = realloc(VEC_DATA(copy), VEC_ALLOC(orig) * sizeof(*VEC_DATA(orig)) ); \
	if(!tmp) { \
		fprintf(stderr, "Out of memory in vector copy"); \
		return; \
	} \
	\
	VEC_DATA(copy) = tmp; \
	VEC_LEN(copy) = VEC_LEN(orig); \
	VEC_ALLOC(copy) = VEC_ALLOC(orig); \
	\
	memcpy(VEC_DATA(copy), VEC_DATA(orig),  VEC_LEN(orig) * sizeof(*VEC_DATA(orig))); \
} while(0)


#define VEC_REVERSE(x) \
do { \
	size_t i, j; \
	void* tmp = alloca(sizeof(*VEC_DATA(x))); \
	for(i = 0, j = VEC_LEN(x); i < j; i++, j--) { \
		memcpy(tmp, VEC_DATA(x)[i]); \
		memcpy(VEC_DATA(x)[i], VEC_DATA(x)[j]); \
		memcpy(VEC_DATA(x)[j], tmp); \
	} \
} while(0)


#define VEC_SPLICE(x, y, where) \
do { \
	if(VEC_ALLOC(x) < VEC_LEN(x) + VEC_LEN(y)) { \
		vec_resize_to((void**)&VEC_DATA(x), &VEC_ALLOC(x), sizeof(*VEC_DATA(x)), VEC_LEN(x) + VEC_LEN(y)); \
	} \
	\
	memcpy( /* move the rest of x forward */ \
		VEC_DATA(x) + where + VEC_LEN(y), \
		VEC_DATA(x) + where,  \
		(VEC_LEN(x) - where) * sizeof(*VEC_DATA(x)) \
	); \
	memcpy( /* copy y into the space created */ \
		VEC_DATA(x) + where, \
		VEC_DATA(y),  \
		VEC_LEN(y) * sizeof(*VEC_DATA(y)) \
	); \
} while(0)
	


#define VEC_SORT(x, fn) \
	qsort(VEC_DATA(x), VEC_LEN(x), sizeof(*VEC_DATA(x)), (void*)fn);

#define VEC_SORT_R(x, fn, s) \
	qsort_r(VEC_DATA(x), VEC_LEN(x), sizeof(*VEC_DATA(x)), (__compar_d_fn_t)fn, (void*)s);


size_t vec_index_of_(void* data, size_t len, size_t elem_size, void* item_p);

#define VEC_INDEXOF(x, pn) \
	vec_index_of_(VEC_DATA(x), VEC_LEN(x), sizeof(*VEC_DATA(x)), (void*)pn);



/*
Loop macro magic

https://www.chiark.greenend.org.uk/~sgtatham/mp/

HashTable obj;
HT_LOOP(&obj, key, char*, val) {
	printf("loop: %s, %s", key, val);
}

effective source:

	#define HT_LOOP(obj, keyname, valtype, valname)
	if(0)
		finished: ;
	else
		for(char* keyname;;) // internal declarations, multiple loops to avoid comma op funny business
		for(valtype valname;;)
		for(void* iter = NULL ;;)
			if(HT_next(obj, iter, &keyname, &valname))
				goto main_loop;
			else
				while(1)
					if(1) {
						// when the user uses break
						goto finished;
					}
					else
						while(1)
							if(!HT_next(obj, iter, &keyname, &valname)) {
								// normal termination
								goto finished;
							}
							else
								main_loop:
								//	{ user block; not in macro }
*/
#define VEC__PASTEINNER(a, b) a ## b
#define VEC__PASTE(a, b) VEC__PASTEINNER(a, b) 
#define VEC__ITER(key, val) VEC__PASTE(VEC_iter_ ## key ## __ ## val ## __, __LINE__)
#define VEC__FINISHED(key, val) VEC__PASTE(VEC_finished__ ## key ## __ ## val ## __, __LINE__)
#define VEC__MAINLOOP(key, val) VEC__PASTE(VEC_main_loop__ ## key ## __ ## val ## __, __LINE__)    
#define VEC_EACH(obj, index, valname) \
if(0) \
	VEC__FINISHED(index, val): ; \
else \
	for(typeof(*VEC_DATA(obj)) valname ;;) \
	for(size_t index = 0;;) \
		if(index < VEC_LEN(obj) && (valname = VEC_ITEM(obj, index), 1)) \
			goto VEC__MAINLOOP(index, val); \
		else \
			while(1) \
				if(1) { \
					goto VEC__FINISHED(index, val); \
				} \
				else \
					while(1) \
						if(++index >= VEC_LEN(obj) || (valname = VEC_ITEM(obj, index), 0)) { \
							goto VEC__FINISHED(index, val); \
						} \
						else \
							VEC__MAINLOOP(index, val) :
							
							//	{ user block; not in macro }



// this version only iterates the index   
#define VEC_LOOP(obj, index) \
if(0) \
	VEC__FINISHED(index, val): ; \
else \
	for(size_t index = 0;;) \
		if(index < VEC_LEN(obj)) \
			goto VEC__MAINLOOP(index, val); \
		else \
			while(1) \
				if(1) { \
					goto VEC__FINISHED(index, val); \
				} \
				else \
					while(1) \
						if(++index >= VEC_LEN(obj)) { \
							goto VEC__FINISHED(index, val); \
						} \
						else \
							VEC__MAINLOOP(index, val) :
							
							//	{ user block; not in macro }







void vec_resize(void** data, size_t* size, size_t elem_size);
ptrdiff_t vec_find(void* data, size_t len, size_t stride, void* search);
void vec_resize_to(void** data, size_t* size, size_t elem_size, size_t new_size);




/*********************************
      Pointer Sets
**********************************

Built around sorted vectors

*/

typedef struct PointerSet {
	void** set;
	size_t length;
	size_t alloc;
} PointerSet;


void PointerSet_print(PointerSet* ps);
void PointerSet_insert(PointerSet* ps, void* p);
int PointerSet_remove(PointerSet* ps, void* p);
int PointerSet_exists(PointerSet* ps, void* p);
PointerSet* PointerSet_alloc();
void PointerSet_init(PointerSet* ps);
void PointerSet_free(PointerSet* ps);
void PointerSet_destroy(PointerSet* ps);
int PointerSet_equal(PointerSet* a, PointerSet* b);
PointerSet* PointerSet_intersect(PointerSet* a, PointerSet* b);
PointerSet* PointerSet_union(PointerSet* a, PointerSet* b);
PointerSet* PointerSet_difference(PointerSet* a, PointerSet* b);
size_t PointerSet_find_index(PointerSet* ps, void* p);

// adds b into a 
void PointerSet_union_inplace(PointerSet* a, PointerSet* b);




/*********************************
      Generic Struct Sets
**********************************


*/

typedef int (*SetCmpFn)(void*, void*);

typedef struct StructSet {
	void* set;
	size_t length;
	size_t alloc;
	size_t elem_size;
	SetCmpFn cmp;
} StructSet;


#define StructSet_init(ss, type, comp_fn) \
do { \
	(ss)->length = 0; \
	(ss)->alloc = 0; \
	(ss)->elem_size = sizeof(type); \
	(ss)->cmp = (void*)(comp_fn); \
} while(0)



int StructSet_insert(StructSet* ss, void* p);
int StructSet_remove(StructSet* ss, void* p);
int StructSet_exists(StructSet* ss, void* p);
#define StructSet_alloc(e, c) StructSet_alloc_(sizeof(e), cmp)
StructSet* StructSet_alloc_(size_t elem_size, SetCmpFn cmp);
void StructSet_free(StructSet* ss);
void StructSet_destroy(StructSet* ss);

// must be the exact same set types and compare functions
StructSet* StructSet_intersect(StructSet* a, StructSet* b); \
StructSet* StructSet_union(StructSet* a, StructSet* b); \
StructSet* StructSet_difference(StructSet* a, StructSet* b); \
size_t StructSet_find_index(StructSet* ss, void* p);



/*********************************
      Generic Base Typed Sets
**********************************


*/

#define DECLARE_SET_FOR_TYPE(type) \
	typedef struct type##Set { \
		type* set; \
		size_t length; \
		size_t alloc; \
	} type##Set; \
	\
	void type##Set_print(type##Set* ps); \
	void type##Set_insert(type##Set* ps, type p); \
	int type##Set_remove(type##Set* ps, type p); \
	int type##Set_exists(type##Set* ps, type p); \
	type##Set* type##Set_alloc(); \
	void type##Set_init(type##Set* ps); \
	void type##Set_free(type##Set* ps); \
	void type##Set_destroy(type##Set* ps); \
	type##Set* type##Set_intersect(type##Set* a, type##Set* b); \
	type##Set* type##Set_union(type##Set* a, type##Set* b); \
	void type##Set_union_inplace(type##Set* a, type##Set* b); \
	type##Set* type##Set_difference(type##Set* a, type##Set* b); \
	size_t type##Set_find_index(type##Set* ps, type p);





#define DEFINE_SET_INSERT(type) \
void type##Set_insert(type##Set* ps, type p) { \
	\
	if(ps->length == 0) { \
		ps->alloc = 8;  \
		ps->set = calloc(1, ps->alloc * sizeof(*ps->set));  \
		  \
		ps->set[0] = p;  \
		ps->length++;  \
		return;  \
	}  \
	else if(ps->length + 1 <= ps->alloc) {  \
		ps->alloc *= 2;  \
		ps->set = realloc(ps->set, ps->alloc * sizeof(*ps->set));  \
	}   \
	\
	size_t i = type##Set_find_index(ps, p);  \
	if(ps->set[i] == p) return;  \
  \
	memmove(ps->set + i + 1, ps->set + i, (ps->length - i) * sizeof(*ps->set));  \
	ps->set[i] = p;  \
	ps->length++;  \
}


#define DEFINE_SET_PRINT(type, fmt) \
void type##Set_print(type##Set* ps) { \
	printf(#type "Set %p (%ld items)\n", ps, ps->length); \
	for(int i = 0; i < ps->length; i++) { \
		printf(" %d: " fmt "\n", i, ps->set[i]); \
	} \
}


#define DEFINE_SET_FIND_INDEX(type) \
size_t type##Set_find_index(type##Set* ps, type p) { \
	ptrdiff_t R = ps->length - 1; \
	ptrdiff_t L = 0; \
	ptrdiff_t i; \
	 \
	while(R - L > 0) { \
		 \
		i = L + ((R - L) / 2); \
		if(ps->set[i] < p) { \
			L = i + 1; \
		} \
		else if(ps->set[i] > p) { \
			R = i - 1; \
		} \
		else { \
			return i; \
		} \
	} \
	 \
	return (ps->set[L] < p) ? L + 1 : L; \
} 


#define DEFINE_SET_REMOVE(type) \
int type##Set_remove(type##Set* ps, type p) { \
	if(ps->length == 0) return 0; \
	 \
	size_t i = type##Set_find_index(ps, p); \
	if(ps->set[i] != p) return 0; \
	 \
	memmove(ps->set + i, ps->set + i + 1, (ps->length - i - 1) * sizeof(*ps->set)); \
	ps->length--; \
	return 1; \
}

#define DEFINE_SET_EXISTS(type) \
int type##Set_exists(type##Set* ps, type p) { \
	size_t i = type##Set_find_index(ps, p); \
	return (ps->set[i] == p); \
}

#define DEFINE_SET_ALLOC(type) \
type##Set* type##Set_alloc() { \
	type##Set* ps = malloc(sizeof(*ps)); \
	type##Set_init(ps); \
}

#define DEFINE_SET_INIT(type) \
void type##Set_init(type##Set* ps) { \
	ps->alloc = 0; \
	ps->length = 0; \
}

#define DEFINE_SET_FREE(type) \
void type##Set_free(type##Set* ps) { \
	free(ps->set); \
	free(ps); \
}

#define DEFINE_SET_DESTROY(type) \
void type##Set_destroy(type##Set* ps) { \
	free(ps->set); \
}


#define DEFINE_SET_INTERSECT(type) \
type##Set* type##Set_intersect(type##Set* a, type##Set* b) { \
	type##Set* c = malloc(sizeof(*c)); \
	 \
	c->alloc = a->length > b->length ? a->length : b->length; \
	c->set = malloc(c->alloc * sizeof(*c->set)); \
	c->length = 0; \
	 \
	size_t ci = 0; \
	size_t bi = 0; \
	size_t ai = 0; \
	while(ai < a->length && bi < b->length) { \
		type ap = a->set[ai]; \
		type bp = b->set[bi]; \
		if(ap == bp) { \
			c->set[ci] = a->set[ai]; \
			c->length++; \
			ai++; bi++; ci++;  \
		} \
		else if(ap > bp) { \
			bi++; \
		} \
		else { \
			ai++; \
		} \
	} \
	 \
	return c; \
}

#define DEFINE_SET_UNION(type) \
type##Set* type##Set_union(type##Set* a, type##Set* b) { \
	type##Set* c = malloc(sizeof(*c)); \
	 \
	c->alloc = a->length + b->length; \
	c->set = malloc(c->alloc * sizeof(*c->set)); \
	c->length = 0; \
	 \
	size_t ci = 0; \
	size_t bi = 0; \
	size_t ai = 0; \
	while(ai < a->length || bi < b->length) { \
		type ap = a->set[ai]; \
		type bp = b->set[bi]; \
		if(ap == bp) { \
			c->set[ci] = a->set[ai]; \
			c->length++; \
			ai++; bi++; ci++;  \
		} \
		else if(ap > bp) { \
			c->set[ci++] = b->set[bi]; \
			c->length++; \
			bi++; \
		} \
		else { \
			c->set[ci++] = a->set[ai]; \
			c->length++; \
			ai++; \
		} \
	} \
	 \
	return c; \
}

#define DEFINE_SET_UNION_INPLACE(type) \
void type##Set_union_inplace(type##Set* a, type##Set* b) { \
	type##Set* c = malloc(sizeof(*c)); \
	\
	a->alloc = a->length + b->length; \
	a->set = realloc(a->set, a->alloc * sizeof(*a->set)); \
	\
	size_t final_length = 0; \
	ptrdiff_t bi = b->length - 1; \
	ptrdiff_t ai = a->length - 1; \
	ptrdiff_t wi = a->alloc - 1; \
	while(ai >= 0 && bi >= 0) { \
		type ap = a->set[ai]; \
		type bp = b->set[bi]; \
		if(ap == bp) { \
			a->set[wi] = a->set[ai]; \
			final_length++; \
			ai--; bi--; wi--;  \
		} \
		else if(ap < bp) { \
			a->set[wi--] = b->set[bi--]; \
			final_length++; \
		} \
		else { \
			a->set[wi--] = a->set[ai--]; \
			final_length++; \
		} \
	}; \
	 \
	while(ai >= 0) { \
		a->set[wi--] = a->set[ai--]; \
		final_length++; \
	} \
	while(bi >= 0) { \
		a->set[wi--] = b->set[bi--]; \
		final_length++; \
	} \
	 \
	memmove(a->set, a->set + a->alloc - final_length, final_length * sizeof(*a->set)); \
	a->length = final_length; \
}

#define DEFINE_SET_DIFFERENCE(type) \
type##Set* type##Set_difference(type##Set* a, type##Set* b) { \
	type##Set* c = malloc(sizeof(*c)); \
	 \
	c->alloc = a->length + b->length; \
	c->set = malloc(c->alloc * sizeof(*c->set)); \
	c->length = 0; \
	 \
	size_t ci = 0; \
	size_t bi = 0; \
	size_t ai = 0; \
	while(ai < a->length || bi < b->length) { \
		type ap = a->set[ai]; \
		type bp = b->set[bi]; \
		if(ap == bp) { \
			ai++; bi++;  \
		} \
		else if(ap > bp) { \
			c->set[ci++] = b->set[bi]; \
			c->length++; \
			bi++; \
		} \
		else { \
			c->set[ci++] = a->set[ai]; \
			c->length++; \
			ai++; \
		} \
	} \
	 \
	return c; \
}

#define DEFINE_SET_FOR_TYPE(type, fmt) \
	DEFINE_SET_DIFFERENCE(type) \
	DEFINE_SET_UNION(type) \
	DEFINE_SET_UNION_INPLACE(type) \
	DEFINE_SET_INTERSECT(type) \
	DEFINE_SET_ALLOC(type) \
	DEFINE_SET_INIT(type) \
	DEFINE_SET_FREE(type) \
	DEFINE_SET_DESTROY(type) \
	DEFINE_SET_INSERT(type) \
	DEFINE_SET_REMOVE(type) \
	DEFINE_SET_EXISTS(type) \
	DEFINE_SET_PRINT(type, fmt) \
	DEFINE_SET_FIND_INDEX(type)




DECLARE_SET_FOR_TYPE(char)
DECLARE_SET_FOR_TYPE(short)
DECLARE_SET_FOR_TYPE(int)
DECLARE_SET_FOR_TYPE(long)
DECLARE_SET_FOR_TYPE(uint8_t)
DECLARE_SET_FOR_TYPE(uint16_t)
DECLARE_SET_FOR_TYPE(uint32_t)
DECLARE_SET_FOR_TYPE(uint64_t)
DECLARE_SET_FOR_TYPE(double)
DECLARE_SET_FOR_TYPE(float)




/*********************************
      Linked Lists
**********************************

minimal struct signature: 

typedef struct Link {
	struct Link* next;
	struct Link* prev;
} Link;

typedef struct List {
	Link* head;
	Link* tail;
	int length;
} List;


these macros are not perfect. they create temporary variables and should not be nested.

*/
 

#define LIST_DECL(type, prop) \
typedef struct type ## _Link { \
	struct type ## _Link *next, *prev; \
	type prop; \
} type ## _Link; \
typedef struct type ## _List { \
	struct type ## _Link *head, *tail; \
	int length; \
} type ## _List; 


#define LIST_INIT(list) \
(list)->head = NULL; \
(list)->tail = NULL; \
(list)->length = 0; 


#define LIST_APPEND(list, prop, x) \
do { \
	typeof((list)->head) __new_link = calloc(1, sizeof(*__new_link)); \
	__new_link->prev = (list)->tail; \
	if(__new_link->prev) __new_link->prev->next = __new_link; \
	(list)->tail = __new_link; \
	if((list)->head == NULL) (list)->head = __new_link; \
	__new_link->prop = (x); \
	(list)->length++; \
} while(0);



#define LIST_PREPEND(list, prop, x) \
do { \
	typeof((list)->head) __new_link = calloc(1, sizeof(*__new_link)); \
	__new_link->next = (list)->head; \
	if(__new_link->next) __new_link->next->prev = __new_link; \
	(list)->head = __new_link; \
	if((list)->tail == NULL) (list)->tail = __new_link; \
	__new_link->prop = x; \
	(list)->length++; \
} while(0);


#define LIST_INS_AFTER(list, exist, prop, x) \
do { \
	typeof((list)->head) __new_link = calloc(1, sizeof(*__new_link)); \
	__new_link->next = (exist)->next; \
	__new_link->prev = exist; \
	(exist)->next = __new_link; \
	if(__new_link->next) __new_link->next->prev = __new_link; \
	if((list)->tail == (exist)) (list)->tail = __new_link; \
	__new_link->prop = x; \
} while(0);


#define LIST_REMOVE(list, link) \
do { \
	typeof((list)->head) __link = (link); \
	if((__link) == (list)->head) (list)->head = (__link)->next; \
	if((__link) == (list)->tail) (list)->tail = (__link)->prev; \
	if((__link)->prev) (__link)->prev->next = (__link)->next; \
	if((__link)->next) (__link)->next->prev = (__link)->prev; \
	free(__link); \
	(list)->length = (list)->length == 0 ? 0 : (list)->length - 1; \
} while(0);


// allows for cyclic iteration
#define LIST_NEXT_LOOP(list, link) \
((link)->next ? (link)->next : (list)->head)

#define LIST_PREV_LOOP(list, link) \
((link)->prev ? (link)->prev : (list)->tail)


// concat or copy a list
#define LIST_CONCAT(src, dest) \
do { \
	typeof((src)->head) __link = (src)->head; \
	while(__link) { \
		typeof((src)->head) __new_link = calloc(1, sizeof(*__new_link)); \
		memcpy(__new_link, __link, sizeof(*__link)); \
		__new_link->next = NULL; \
		__new_link->prev = (dest)->tail; \
		if((dest)->tail) (dest)->tail->next = __new_link; \
		if((dest)->head == NULL) (dest)->head = __new_link; \
		(dest)->tail = __new_link; \
		(dest)->length++; \
		__link = __link->next; \
	} \
} while(0);


// does not create a new list from the output
#define LIST_MAP(list, fn) \
do { \
	typeof((list)->head) __link = (list)->head; \
	while(__link) { \
		(fn)(__link); \
		__link = __link->next; \
	} \
} while(0);


#define LIST_FREE(list) \
do { \
	typeof((list)->head) __link = (list)->head; \
	while(__link) { \
		typeof((list)->head) __tmp = __link; \
		__link = __link->next; \
		free(__tmp); \
	} \
	(list)->head = NULL; \
	(list)->tail = NULL; \
	(list)->length = 0; \
} while(0);



#define LIST__PASTEINNER(a, b) a ## b
#define LIST__PASTE(a, b) LIST__PASTEINNER(a, b) 
#define LIST__FINISHED(iter) LIST__PASTE(LIST_finished__ ## iter ## __, __LINE__)
#define LIST__MAINLOOP(iter) LIST__PASTE(LIST_main_loop__ ## iter ## __, __LINE__) 
#define LIST_LOOP(list, iter) \
if(0) \
	LIST__FINISHED(iter): ; \
else \
	for(typeof((list)->head) iter = (list)->head;;) \
		if(iter != NULL) \
			goto LIST__MAINLOOP(iter); \
		else \
			while(1) \
				if(1) { \
					goto LIST__FINISHED(iter); \
				} \
				else \
					while(1) \
						if(iter = iter->next, iter == NULL) { \
							goto LIST__FINISHED(iter); \
						} \
						else \
							LIST__MAINLOOP(iter) :
							
							//	{ user block; not in macro }





// lockless queue


#define LLQUEUE_DECL(type, prop) \
typedef struct type ## _LLQLink { \
	struct type ## _LLQLink *next; \
	type prop; \
} type ## _LLQLink; \
typedef struct type ## _LLQList { \
	struct type ## _LLQLink *head, *tail; \
	int length; \
} type ## _LLQueue; 


#define LLQ_INIT(list) \
(list)->head = NULL; \
(list)->tail = NULL; \
(list)->length = 0; 

/*
#define LLQ_PUSH_HEAD(list, prop, x) \
do { 
	typeof((list)->head) __new_link = calloc(1, sizeof(*__new_link)); \
	
	typeof((list)->head) __p;
	
	do{
		__p = (list)->head;
	} while(atomic_compare_exchange_strong(&(list)->head, &__p, __new_link);
	
	__new_link->next = __p;
	
	(list)->tail = __new_link; \
	if((list)->head == NULL) (list)->head = __new_link; \
	__new_link->prop = (x); \
	(list)->length++; \
} while(0);
*/











#endif // __DS_H__
