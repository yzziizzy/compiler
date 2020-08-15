#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "rb.h"


int rb_is_red(rb_node* n) {
	return n && n->color == 1;
}
int rb_is_left_child(rb_node* n) {
	return n && n->parent && n->parent->kids[0] == n;
}
void rb_set_red(rb_node* n) {
	if(!n) return;
	n->color = 1;
}
void rb_set_black(rb_node* n) {
	return n->color = 0;
}

rb_node* rb_parent(rb_node* n) {
	return n ? n->parent : NULL;
}
rb_node* rb_grandparent(rb_node* n) {
	return n ? (n->parent ? n->parent->parent : NULL) : NULL;
}
rb_node* rb_uncle(rb_node* n) {
	if(!n || !n->parent || !n->parent->parent) return NULL;
	rb_node* p = n->parent;
	rb_node* g = p->parent;
	return g->kids[p == g->kids[0]];
}

static void rb_swap_child(rb_node* p, rb_node* oc, rb_node* nc) {
	if(!p) {
		if(nc) nc->parent = NULL;
		return;
	}
	if(p->kids[0] == oc) {
		p->kids[0] = nc;
	}
	else {
		p->kids[1] = nc;
	}
	if(nc) nc->parent = p;
} 

#include <stdint.h>
#define mask(x) (void*)((uint64_t)0xff & (uint64_t)(x)>>4)

 void rb_rotate_right(rb_tree_* tree, rb_node* g) {
	printf("rotating right %p\n", g);
	if(!g) return;
	
	printf("g: %x\n", mask(g));
	printf("l/p: %x\n", mask(g->kids[0]));
	printf("r/u: %x\n", mask(g->kids[1]));
	
	rb_node* op = g->parent;
	printf("op: %x\n", mask(op));
	rb_node* l = g->kids[0];
	if(l) {
		rb_node* t3 = l->kids[1];
		
		g->kids[0] = t3;
		if(t3) t3->parent = g;
		
		l->kids[1] = g;
	}

	g->parent = l;
	
	if(tree->root == g) tree->root = l;
	rb_swap_child(op, g, l);
}

void rb_rotate_left(rb_tree_* tree, rb_node* g) {
	printf("rotating left %p\n", g);
	if(!g) return;
	
	printf("g: %x\n", mask(g));
	printf("l/p: %x\n", mask(g->kids[0]));
	printf("r/u: %x\n", mask(g->kids[1]));
	
	rb_node* op = g->parent;
	rb_node* r = g->kids[1];
	if(r) {
		rb_node* t3 = r->kids[0];
		
		g->kids[1] = t3;
		if(t3) t3->parent = g;
		
		r->kids[0] = g;
		g->parent = r;
	}
	
	if(tree->root == g) tree->root = r;
	rb_swap_child(op, g, r);
}



static void rb_swap_color(rb_node* a, rb_node* b) {
	int ca = rb_is_red(a);
	int cb = rb_is_red(b);
	
	if(a) a->color = cb;
	if(b) b->color = ca;
}


void rb_set_parent(rb_node* n, rb_node* parent) {
// 	void* c = rb_is_red(n);
// 	n->parent = c | parent;
	n->parent = parent;
}


static void rb_rebalance(rb_tree_* tree, rb_node* n);


rb_node* rb_new_node(rb_node* parent, char* key, void* data) {
	rb_node* n = calloc(1, sizeof(*n));
	rb_set_parent(n, parent);
	n->key = key;
	n->data = data;
	n->kids[0] = NULL;
	n->kids[1] = NULL;
	rb_set_red(n);
	return n;
}
void rb_free_node(rb_node* n) {
	free(n);
}




void rb_insert_(rb_tree_* tree, char* key, void* val) {
	if(tree->root == NULL) {
		tree->root = rb_new_node(NULL, key, val);
		rb_set_black(tree->root);
		return;
	}
	
	rb_node* n = rb_bt_node_insert(tree, tree->root, key, val);
	if(!n) return;
	

	
	rb_rebalance(tree, n);
// 	if(n == tree->root
	
}


static void rb_rebalance(rb_tree_* tree, rb_node* n) {
	if(!n) return;
	if(n == tree->root) {
		printf(" root set to black\n");
		rb_set_black(n);
		return;
	}
	
	printf("%x ", mask(n));
	rb_node* p = rb_parent(n);
	
	if(!p || !rb_is_red(p)) {
		printf("black parent %p \n", p);
		return;
	}
	
	rb_node* u = rb_uncle(n);
	rb_node* g = rb_grandparent(n);
	if(!g) {
		printf(" no grandparent (%x)\n", mask(g));
		return;
	}
	printf(" grandparent: %x\n", mask(g));
	
// 		print_tree(tree->root, 3);
	
	if(rb_is_red(u)) {
		printf("red uncle %p\n", u);
		
		rb_set_black(u);
		rb_set_black(p);
		rb_set_red(g);
		
		rb_rebalance(tree, g);
		return;
	}
	else { // black uncle
		printf("black uncle (%x): ", mask(u));
		
		if(rb_is_left_child(p)) { 
			
			// left left case
			if(rb_is_left_child(n)) { 
				printf("LL\n");
				rb_rotate_right(tree, g);
// 				print_tree(tree->root, 5);
				rb_swap_color(g, p);
			}
			else { // left right case
				printf("LR\n");
				rb_rotate_left(tree, p);
				rb_rotate_right(tree, g);
				rb_swap_color(g, n);
			}
		}
		else {
			
			// right left case
			if(rb_is_left_child(n)) {
				printf("RL\n");
				rb_rotate_left(tree, g);
				rb_swap_color(g, p);
			}
			else { // right right case
				printf("RR\n");
				rb_rotate_right(tree, p);
				rb_rotate_left(tree, g);
				rb_swap_color(g, n);
			}
		}
	}
	
}



// static int N = 0;
rb_node* rb_bt_node_insert(rb_tree_* tree, rb_node* n, char* key, void* val) {
// 	if(++N > 10) return NULL;
// 	printf("\nN: %d \n", N);
	
	int d = strcmp(n->key, key);
	if(d == 0) {
		n->data = val;
		return NULL; // no balancing needed
	}
	else if(d < 0) {
		if(n->kids[0]) return rb_bt_node_insert(tree, n->kids[0], key, val);
		n->kids[0] = rb_new_node(n, key, val);
		return n->kids[0];
	}
	else {
		if(n->kids[1]) return rb_bt_node_insert(tree, n->kids[1], key, val); 
		n->kids[1] = rb_new_node(n, key, val);
		return n->kids[1];
	}
}


static int rb_recolor(rb_node* n) {
	if(!n->parent) { // recolor the root to black
		rb_set_black(n);
	}
	else if(n->parent || rb_is_red(n->parent)) {
		rb_node* u = rb_uncle(n);
		
		if(rb_is_red(u)) {
			rb_set_black(u);
			rb_set_black(n->parent);
			rb_set_red(n->parent->parent);
			
			rb_recolor(n->parent->parent);
		}
		else {
			if(n->parent == n->parent->parent->kids[0]) { // p is the left child of g
				if(n == n->parent->kids[0]) { // n is the left child
					
					// rotate g right
					rb_node* p = n->parent;
					rb_node* g = p->parent;
					
					
					// BUG: does not account for g's pointer. needs to val-swap instead
					g->kids[0] = p->kids[1];
					if(g->kids[0]) g->kids[0]->parent = g;
					
					p->kids[1] = g;
					g->parent = p;
					
					rb_swap_color(p, g);
					
					return;
				}
				else { // n is the right child
					
					// rotate p left
					
					
					// rotate g right
					rb_node* p = n->parent;
					rb_node* g = p->parent;
					
					g->kids[0] = p->kids[1];
					if(g->kids[0]) g->kids[0]->parent = g;
					
					p->kids[1] = g;
					g->parent = p;
					
					rb_swap_color(p, g);
					
					
				}
			}
			else { // p is the right child of g
				if(n == n->parent->kids[0]) { // n is the left child
					
					
					
				}
				else { // n is the right child
					
				}
			}
		}
		
		
	}
}



