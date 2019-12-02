
#include "ds.h"
#include <string.h>


// super nifty site:
// http://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
static int inline nextPOT(int in) {
	
	in--;
	in |= in >> 1;
	in |= in >> 2;
	in |= in >> 4;
	in |= in >> 8;
	in |= in >> 16;
	in++;
	
	return in;
}


void vec_resize_to(void** data, size_t* size, size_t elem_size, size_t new_size) {
	void* tmp;
	
	if(*size >= new_size) return;
	
	*size *= nextPOT(new_size);
	
	tmp = realloc(*data, *size * elem_size);
	if(!tmp) {
		fprintf(stderr, "Out of memory in vector resize");
		return;
	}
	
	*data = tmp;
}

void vec_resize(void** data, size_t* size, size_t elem_size) {
	void* tmp;
	
	if(*size < 8) *size = 8;
	else *size *= 2;
	
	tmp = realloc(*data, *size * elem_size);
	if(!tmp) {
		fprintf(stderr, "Out of memory in vector resize");
		return;
	}
	
	*data = tmp;
}
 
ptrdiff_t vec_find(void* data, size_t len, size_t stride, void* search) {
	size_t i;
	for(i = 0; i < len; i++) {
		if(0 == memcmp(data + (i * stride), search, stride)) {
			return i;
		}
	}
	
	return -1;
}


size_t vec_index_of_(void* data, size_t len, size_t elem_size, void* item_p) {
	size_t i;
	for(i = 0; i < len; i++) {
		if(memcmp(item_p, data + elem_size * i, elem_size) == 0) 
			return i;
	}
	return -1;
}

// Pointer Sets


void PointerSet_print(PointerSet* ps) {
	
	printf("PointerSet %p (%ld items)\n", ps, ps->length);
	for(int i = 0; i < ps->length; i++) {
		printf(" %d: %p\n", i, ps->set[i]);
	}
}


size_t PointerSet_find_index(PointerSet* ps, void* p) {
	ptrdiff_t  R = ps->length - 1;
	ptrdiff_t L = 0;
	ptrdiff_t i;
	
	while(R - L > 0) {
		
		// midpoint
		i = L + ((R - L) / 2);
		if(ps->set[i] < p) {
			L = i + 1;
		}
		else if(ps->set[i] > p) {
			R = i - 1;
		}
		else {
			return i;
		}
	}
	
	return (ps->set[L] < p) ? L + 1 : L;
} 

void PointerSet_insert(PointerSet* ps, void* p) {
	
	if(ps->length == 0) {
		ps->alloc = 8;
		ps->set = calloc(1, ps->alloc * sizeof(*ps->set));
		
		ps->set[0] = p;
		ps->length++;
		return;
	}
	else if(ps->length + 1 <= ps->alloc) {
		ps->alloc *= 2;
		ps->set = realloc(ps->set, ps->alloc * sizeof(*ps->set));
	} 
	
	// find the slot
	size_t i = PointerSet_find_index(ps, p);
	if(ps->set[i] == p) return;

	memmove(ps->set + i + 1, ps->set + i, (ps->length - i) * sizeof(*ps->set));
	ps->set[i] = p;
	ps->length++;
}

int PointerSet_remove(PointerSet* ps, void* p) {
	if(ps->length == 0) return 0;
	
	size_t i = PointerSet_find_index(ps, p);
	if(ps->set[i] != p) return 0;
	
	memmove(ps->set + i, ps->set + i + 1, (ps->length - i - 1) * sizeof(*ps->set));
	ps->length--;
	return 1;
}

int PointerSet_exists(PointerSet* ps, void* p) {
	size_t i = PointerSet_find_index(ps, p);
	return (ps->set[i] == p);
}

PointerSet* PointerSet_alloc() {
	PointerSet* ps = malloc(sizeof(ps));
	ps->alloc = 0;
	ps->length = 0;
}

void PointerSet_init(PointerSet* ps) {
	ps->alloc = 0;
	ps->length = 0;
}

void PointerSet_free(PointerSet* ps) {
	free(ps->set);
	free(ps);
}

void PointerSet_destroy(PointerSet* ps) {
	free(ps->set);
	ps->alloc = 0;
	ps->length = 0;
}

PointerSet* PointerSet_intersect(PointerSet* a, PointerSet* b) {
	PointerSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length > b->length ? a->length : b->length;
	c->set = malloc(c->alloc * sizeof(*c->set));
	c->length = 0;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length && bi < b->length) {
		void* ap = a->set[ai];
		void* bp = b->set[bi];
		if(ap == bp) {
			c->set[ci] = a->set[ai];
			c->length++;
			ai++; bi++; ci++; 
		}
		else if(ap > bp) {
			bi++;
		}
		else {
			ai++;
		}
	}
	
	return c;
}

PointerSet* PointerSet_union(PointerSet* a, PointerSet* b) {
	PointerSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length + b->length;
	c->set = malloc(c->alloc * sizeof(*c->set));
	c->length = 0;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length || bi < b->length) {
		void* ap = a->set[ai];
		void* bp = b->set[bi];
		if(ap == bp) {
			c->set[ci] = a->set[ai];
			c->length++;
			ai++; bi++; ci++; 
		}
		else if(ap > bp) {
			c->set[ci++] = b->set[bi];
			c->length++;
			bi++;
		}
		else {
			c->set[ci++] = a->set[ai];
			c->length++;
			ai++;
		}
	}
	
	return c;
}

PointerSet* PointerSet_difference(PointerSet* a, PointerSet* b) {
	PointerSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length + b->length;
	c->set = malloc(c->alloc * sizeof(*c->set));
	c->length = 0;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length || bi < b->length) {
		void* ap = a->set[ai];
		void* bp = b->set[bi];
		if(ap == bp) {
			ai++; bi++; 
		}
		else if(ap > bp) {
			c->set[ci++] = b->set[bi];
			c->length++;
			bi++;
		}
		else {
			c->set[ci++] = a->set[ai];
			c->length++;
			ai++;
		}
	}
	
	return c;
}


// Struct Sets

#define SS_EQ(ss, i, p) \
	ss->cmp(ss->set + i * ss->elem_size, p)

#define SS_CMP(a, b, ai, bi) \
	a->cmp(a->set + ai * a->elem_size, b->set + bi * b->elem_size)

#define SS_SET(ss, i, p) \
	memcpy(ss->set + i * ss->elem_size, p, ss->elem_size)

size_t StructSet_find_index(StructSet* ss, void* p) {
	ptrdiff_t  R = ss->length - 1;
	ptrdiff_t L = 0;
	ptrdiff_t i;
	
	while(R - L > 0) {
		
		// midpoint
		i = L + ((R - L) / 2);
		int n = SS_EQ(ss, i, p);
		if(n < 1) {
			L = i + 1;
		}
		else if(n > 1) {
			R = i - 1;
		}
		else {
			return i;
		}
	}
	
	return (SS_EQ(ss, L, p) < 0) ? L + 1 : L;
} 

void StructSet_insert(StructSet* ss, void* p) {
	
	if(ss->length == 0) {
		ss->alloc = 8;
		ss->set = calloc(1, ss->alloc * ss->elem_size);
		
		SS_SET(ss, 0, p);
		ss->length++;
		return;
	}
	else if(ss->length + 1 <= ss->alloc) {
		ss->alloc *= 2;
		ss->set = realloc(ss->set, ss->alloc * ss->elem_size);
	} 
	
	// find the slot
	size_t i = StructSet_find_index(ss, p);
	if(SS_EQ(ss, i, p) == 0) return;

	memmove(
		ss->set + (i + 1) * ss->elem_size, 
		ss->set + i * ss->elem_size, 
		(ss->length - i) * ss->elem_size
	);
	SS_SET(ss, i, p);
	ss->length++;
}

int StructSet_remove(StructSet* ss, void* p) {
	if(ss->length == 0) return 0;
	
	size_t i = StructSet_find_index(ss, p);
	if(SS_EQ(ss, i, p) != 0) return 0;
	
	memmove(
		ss->set + i * ss->elem_size, 
		 ss->set + (i + 1) * ss->elem_size,
		(ss->length - i - 1) * ss->elem_size
	);
	ss->length--;
	return 1;
}

int StructSet_exists(StructSet* ss, void* p) {
	size_t i = StructSet_find_index(ss, p);
	return SS_EQ(ss, i, p) == 0;
}

StructSet* StructSet_alloc_(size_t elem_size, SetCmpFn cmp) {
	StructSet* ss = malloc(sizeof(ss));
	ss->alloc = 0;
	ss->length = 0;
	ss->elem_size = elem_size;
	ss->cmp = cmp;
}

void StructSet_free(StructSet* ss) {
	free(ss->set);
	free(ss);
}

void StructSet_destroy(StructSet* ss) {
	free(ss->set);
	ss->alloc = 0;
}

StructSet* StructSet_intersect(StructSet* a, StructSet* b) {
	StructSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length > b->length ? a->length : b->length;
	c->set = malloc(c->alloc * c->elem_size);
	c->length = 0;
	c->elem_size = a->elem_size;
	c->cmp = a->cmp;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length && bi < b->length) {
		int n = SS_CMP(a, b, ai, bi);
		if(n == 0) {
			SS_SET(c, ci, a->set + ai * a->elem_size);
			c->length++;
			ai++; bi++; ci++; 
		}
		else if(n > 0) {
			bi++;
		}
		else {
			ai++;
		}
	}
	
	return c;
}

StructSet* StructSet_union(StructSet* a, StructSet* b) {
	StructSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length + b->length;
	c->set = malloc(c->alloc * c->elem_size);
	c->length = 0;
	c->elem_size = a->elem_size;
	c->cmp = a->cmp;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length || bi < b->length) {
		int n = SS_CMP(a, b, ai, bi);
		if(n == 0) {
			SS_SET(c, ci, a->set + ai * a->elem_size);
			c->length++;
			ai++; bi++; ci++; 
		}
		else if(n > 0) {
			SS_SET(c, ci, b->set + bi * b->elem_size);
			c->length++;
			bi++;
		}
		else {
			SS_SET(c, ci, a->set + ai * a->elem_size);
			c->length++;
			ai++;
		}
	}
	
	return c;
}

StructSet* StructSet_difference(StructSet* a, StructSet* b) {
	StructSet* c = malloc(sizeof(*c));
	
	c->alloc = a->length + b->length;
	c->set = malloc(c->alloc * c->elem_size);
	c->length = 0;
	c->elem_size = a->elem_size;
	c->cmp = a->cmp;
	
	size_t ci = 0;
	size_t bi = 0;
	size_t ai = 0;
	while(ai < a->length || bi < b->length) {
		int n = SS_CMP(a, b, ai, bi);
		if(n == 0) {
			ai++; bi++; 
		}
		else if(n > 0) {
			SS_SET(c, ci, b->set + bi * b->elem_size);
			c->length++;
			bi++;
		}
		else {
			SS_SET(c, ci, a->set + ai * a->elem_size);
			c->length++;
			ai++;
		}
	}
	
	return c;
}



// Sets for base types

DEFINE_SET_FOR_TYPE(char, "%c")
DEFINE_SET_FOR_TYPE(short, "%d")
DEFINE_SET_FOR_TYPE(int, "%d")
DEFINE_SET_FOR_TYPE(long, "%ld")
DEFINE_SET_FOR_TYPE(uint8_t, "%d")
DEFINE_SET_FOR_TYPE(uint16_t, "%d")
DEFINE_SET_FOR_TYPE(uint32_t, "%d")
DEFINE_SET_FOR_TYPE(uint64_t, "%ld")
DEFINE_SET_FOR_TYPE(float, "%f")
DEFINE_SET_FOR_TYPE(double, "%f")





