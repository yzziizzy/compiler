#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "rb.h"


rb_node* rb_find_node(rb_node* n, char* key);


int rb_is_red(rb_node* n) {
	return n && n->color == 1;
}
int rb_is_black(rb_node* n) {
	return !rb_is_red(n);
}
int rb_is_double_black(rb_node* n) {
	return n && n->color == -1;
}
int rb_is_left_child(rb_node* n) {
	return n && n->parent && n->parent->kids[0] == n;
}
void rb_set_red(rb_node* n) {
	if(!n) return;
	n->color = 1;
}
void rb_set_black(rb_node* n) {
	if(n) n->color = 0;
}
void rb_set_double_black(rb_node* n) {
	if(n) n->color = -1;
}
rb_node* rb_has_red_child(rb_node* p) {
	if(rb_is_red(p->kids[0])) return p->kids[0]; 
	if(rb_is_red(p->kids[1])) return p->kids[1]; 
	return NULL;
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

rb_node* rb_sibling(rb_node* n) {
	if(!n || !n->parent) return NULL;
	rb_node* p = n->parent;
	return p->kids[n == p->kids[0]];
}


// swaps out one of the nodes's children with a different node
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
	n->key = strdup(key);
	n->data = data;
	n->kids[0] = NULL;
	n->kids[1] = NULL;
	rb_set_red(n);
	return n;
}
void rb_free_node(rb_node* n) {
	free(n->key);
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
	printf("---rebalance---\n");
// 	fprintf(dbg, "prebalance:\n");
// 	html_print_node(tree->root, get_max_height(tree->root)); html_spacer();
		
	if(n == tree->root) {
		printf(" root set to black\n");
		rb_set_black(n);
		return;
	}
	
	printf("%x ", mask(n));
	rb_node* p = rb_parent(n);
	
	if(!p || !rb_is_red(p)) {
		printf("black parent %p (%s)\n", p, p ? p->key : "");
		return;
	}
	
	rb_node* u = rb_uncle(n);
	rb_node* g = rb_grandparent(n);
	if(!g) {
		printf(" no grandparent (%x)\n", mask(g));
		return;
	}
	printf(" grandparent: %x (%s)\n", mask(g), g ? g->key : "");
	
// 		print_tree(tree->root, 3);
	
	if(rb_is_red(u)) {
		printf("red uncle %p (%s)\n", u, u ? u->key : "");
		
		rb_set_black(u);
		rb_set_black(p);
		rb_set_red(g);
		
// 		html_print_node(tree->root, get_max_height(tree->root)); html_spacer();
		
		rb_rebalance(tree, g);
		return;
	}
	else { // black uncle
		printf("black uncle %x (%s): ", mask(u), u ? u->key : "");
		
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
				rb_rotate_right(tree, p);
				rb_rotate_left(tree, g);
				rb_swap_color(g, n);
			}
			else { // right right case
				printf("RR\n");
				rb_rotate_left(tree, g);
				rb_swap_color(g, p);
			}
		}
	}
	
}



// static int N = 0;
rb_node* rb_bt_node_insert(rb_tree_* tree, rb_node* n, char* key, void* val) {
// 	if(++N > 10) return NULL;
// 	printf("\nN: %d \n", N);
	
	int d = strcmp(key, n->key);
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



rb_node* rb_find(rb_tree_* tree, char* key) {
	return rb_find_node(tree->root, key);
}

rb_node* rb_find_node(rb_node* n, char* key) {
	int d = strcmp(key, n->key);
	if(d == 0) {
		return n; 
	}
	else if(d < 0) {
		if(n->kids[0]) return rb_find_node(n->kids[0], key);
	}
	else {
		if(n->kids[1]) return rb_find_node(n->kids[1], key); 
	}
	
	return NULL; // key not in tree 
}


int rb_delete(rb_tree_* tree, char* key, void** data) {
	rb_node* n = rb_find_node(tree->root, key);
	if(!n) return 0;
	
	if(data) *data = n->data; // for the caller to clean up
	
	rb_delete_node(tree, n);
	return 1;
}

int rb_is_leaf(rb_node* n) {
	return (!n->kids[0] && !n->kids[1]);
}

rb_node* rb_has_one_child(rb_node* n) {
	if(n->kids[0] == NULL || n->kids[1] == NULL) {
		return n->kids[0] ? n->kids[0] : n->kids[1];
	}
	return NULL;
}

void rb_copy_value_to(rb_node* to, rb_node* from) {
	to->key = from->key;
	to->data = from->data;
// 	to->color = from->color;
}

rb_node* rb_minimum_successor(rb_node* n) {
	if(n->kids[0] == NULL) return n;
	return rb_minimum_successor(n->kids[0]);
}

// basic b-tree delete
// returns the node (not the value) being actually deleted from the tree
rb_node* rb_internal_delete(rb_tree_* tree, rb_node** np) {
	rb_node* c = NULL;
	rb_node* n = *np;

	// n has two children
	printf("node has two children\n");
	
	c = rb_minimum_successor(n->kids[1]);
	
	
	rb_copy_value_to(n, c);
	rb_node* tmp = NULL;
	if(c->kids[1]) {
		rb_copy_value_to(c, c->kids[1]);
		tmp = c->kids[1];
		rb_swap_child(c, c->kids[1], NULL);
// 		rb_free_node(tmp);
	}
	else {
		rb_swap_child(c->parent, c, NULL);
	}
	*np = c;
	
	return tmp;
}

void rb_delete_node(rb_tree_* tree, rb_node* n) {
	rb_node* c = NULL;
	
	// TODO: move the actual pointer deletion and such to the bottom of this function
	// Or at least return the parent node and sibling relationship from bst_delete
	
	// v == n
	// u == c
	rb_node* p = n->parent;
	
	rb_node* dead = NULL;
	
	if(rb_is_leaf(n)) {
		printf("simply deleting leaf =%s\n", n->key);
//  		rb_swap_child(n->parent, n, NULL); // delete the leaf
		dead = n;
	}
	else if(c = rb_has_one_child(n)) {
		printf("node has one child\n");
		rb_copy_value_to(n, c);
// 		rb_swap_child(n->parent, n, NULL); // delete the leaf
		dead = n;
// 		rb_swap_child(n->parent, n, c); // promote single child
	}
	else {
		c = rb_internal_delete(tree, &n);
		p = n->parent;
	}
	
	int both_black = rb_is_black(n) && rb_is_black(c);
	
	if(!both_black) {
		printf("either one red n=%s, c=%s\n", n?n->key:"", c?c->key:"");
		rb_set_black(c);
		rb_swap_child(dead->parent, dead, c); // promote single child
		rb_free_node(dead);
		return;
	}
	
	printf("both black\n");
	
	
	
	while(n != tree->root) {
		rb_node* s = rb_sibling(n);
		rb_node* sc0 = s->kids[0];
		rb_node* sc1 = s->kids[1];
		printf("\nRecoloring: n=%s\n", n ? n->key : "null");
		
		if(rb_is_black(s)) {
			printf("black sibling %s\n", s?s->key:"-null-");
			// A
			if(rb_is_red(sc0) || rb_is_red(sc1)) {
				printf("either s->kids are red\n");
				if(!rb_is_left_child(s)) {
					if(rb_is_black(sc1)) { // RL -- working ?
						printf("RL, rotate p=%s left, recolor r to black\n", p?p->key:"-");
						rb_set_black(sc0);
						rb_rotate_right(tree, s);
						rb_rotate_left(tree, p);
// 						rb_swap_child(dead->parent, dead, NULL); // delete the leaf
// 						rb_free_node(dead);
// 						return;
					}
					else { // RR -- working ?
						printf("RR, rotate p left\n");
						rb_rotate_left(tree, p);
// 						rb_swap_child(dead->parent, dead, NULL); // delete the leaf
// 						rb_free_node(dead);
// 						return;
					}
				}
				else {
					if(rb_is_black(sc0)) { // LR -- working ?
						printf("LR, rotate p right, recolor r to black\n");
						rb_set_black(sc1);
						rb_rotate_left(tree, s);
						rb_rotate_right(tree, p);
// 						rb_swap_child(dead->parent, dead, NULL); // delete the leaf
// 						rb_free_node(dead);
// 						return;
					}
					else { // LL -- working ?
						printf("LL, rotate p right\n");
						rb_set_black(sc0);
						rb_rotate_right(tree, p);
// 						rb_swap_child(dead->parent, dead, NULL); // delete the leaf
// 						rb_free_node(dead);
// 						return;
					}
				}
				
				rb_swap_child(dead->parent, dead, NULL); // delete the leaf
				rb_free_node(dead);
				return;
			}
			else { // B
				printf("both s->kids are black\n");
				
// 				rb_node* p = rb_parent(c);
				
				rb_set_red(s);
				
				if(rb_is_red(p)) { // -- working
					printf("parent was red\n");
					rb_set_black(p);
					rb_swap_child(dead->parent, dead, NULL); // delete the leaf
					return;
				}
				
				printf("parent was black\n"); // working
				n = p;
				p = n->parent;
				continue;
			}
			
		}
		else { // C
			printf("red sibling\n");
			
			rb_set_black(s);
			rb_set_red(p);
			if(!rb_is_left_child(n)) {
				printf("left case, rotating right\n");
				rb_rotate_right(tree, p);
			}
			else {
				printf("right case, rotating left\n");
				rb_rotate_left(tree, p);
			}
			
			continue;
		}
		
		
		
	}
	
	
	
	
	
}


