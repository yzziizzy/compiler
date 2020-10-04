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


void rb_copy_value_to(rb_node* to, rb_node* from) {
	if(to->key) free(to->key);
	to->key = strdup(from->key);
	to->data = from->data;
// 	to->color = from->color;
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
	else if(p->kids[1] == oc) {
		p->kids[1] = nc;
	}
	if(nc) nc->parent = p;
} 

#include <stdint.h>
#define mask(x) (void*)((uint64_t)0xff & (uint64_t)(x)>>4)

void rb_rotate_right(rb_tree_* tree, rb_node* g) {
// 	printf("rotating right %p\n", g);
	if(!g) return;
	
	rb_node* op = g->parent;
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
	if(!g) return;
	
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
// 	printf("freeing node: %p %s\n", n, n->key);
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
// 	printf("---rebalance---\n");
// 	fprintf(dbg, "prebalance:\n");
// 	html_print_node(tree->root, get_max_height(tree->root)); html_spacer();
		
	if(n == tree->root) {
// 		printf(" root set to black\n");
		rb_set_black(n);
		return;
	}
	
// 	printf("%x ", mask(n));
	rb_node* p = rb_parent(n);
	
	if(!p || !rb_is_red(p)) {
// 		printf("black parent %p (%s)\n", p, p ? p->key : "");
		return;
	}
	
	rb_node* u = rb_uncle(n);
	rb_node* g = rb_grandparent(n);
	if(!g) {
// 		printf(" no grandparent (%x)\n", mask(g));
		return;
	}
// 	printf(" grandparent: %x (%s)\n", mask(g), g ? g->key : "");
	
// 		print_tree(tree->root, 3);
	
	if(rb_is_red(u)) {
// 		printf("red uncle %p (%s)\n", u, u ? u->key : "");
		
		rb_set_black(u);
		rb_set_black(p);
		rb_set_red(g);
		
// 		html_print_node(tree->root, get_max_height(tree->root)); html_spacer();
		
		rb_rebalance(tree, g);
		return;
	}
	else { // black uncle
// 		printf("black uncle %x (%s): ", mask(u), u ? u->key : "");
		
		if(rb_is_left_child(p)) { 
			
			// left left case
			if(rb_is_left_child(n)) { 
// 				printf("LL\n");
				rb_rotate_right(tree, g);
// 				print_tree(tree->root, 5);
				rb_swap_color(g, p);
			}
			else { // left right case
// 				printf("LR\n");
				rb_rotate_left(tree, p);
				rb_rotate_right(tree, g);
				rb_swap_color(g, n);
			}
		}
		else {
			
			// right left case
			if(rb_is_left_child(n)) {
// 				printf("RL\n");
				rb_rotate_right(tree, p);
				rb_rotate_left(tree, g);
				rb_swap_color(g, n);
			}
			else { // right right case
// 				printf("RR\n");
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
	if(!n) return NULL;
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


rb_node* rb_minimum_successor(rb_node* n) {
	if(n->kids[0] == NULL) return n;
	return rb_minimum_successor(n->kids[0]);
}


void rb_delete_node(rb_tree_* tree, rb_node* n) {
	// n is the node the user requested to be deleted
	
	rb_node* c = NULL;
	rb_node* d;
	rb_node* s;
	rb_node* p;
	rb_node* dead;
	
	if(n == tree->root && n->kids[0] == NULL && n->kids[1] == NULL) {
// 		printf("deleting root\n");
		rb_free_node(n);
		tree->root = NULL;
		return;
	}
	
NEW_N:
	if(rb_is_leaf(n)) { // c will be left null
// 		printf("n is leaf n=%s\n", n->key);
		
		dead = n;
	}
	else if((c = rb_has_one_child(n))) { // assigns the child to c
// 		printf("n has one child n:%s, c:%s\n", n->key, c->key);
		rb_swap_child(n->parent, n, c); // promote single child
		
		dead = n;
	}
	else { // cannot get here twice
		c = rb_minimum_successor(n->kids[1]);
// 		printf("internal node, replacing %s with %s\n", n->key, c->key);
		rb_copy_value_to(n, c);
		n = c;
		c = NULL;
		goto NEW_N;
	}
	
	p = rb_parent(n);
	
	// deleting a red node does nothing to the tree properties
	// bail early 
	if(rb_is_red(n)) {
// 		printf("n is red\n");
		rb_swap_child(dead->parent, dead, NULL); // delete from tree
		rb_free_node(dead);
		return;
	}
	
	// n is black
	
	// if c is red, replace n with c and set c to black
	// no change in black height of tree
	if(c && rb_is_red(c)) {
// 		printf("c is red p:%p, n:%s, c:%s\n", p, n->key, c->key);
		if(p) {
			rb_swap_child(p, n, c);
			rb_set_black(c);
		}
		else {
			tree->root = c;
			rb_set_black(c);
		}
		
		rb_free_node(dead);
		return;
	}
	
// 	if(!c) {
// 		printf("no child when there should be\n");
// 		exit(2);
// 	}
	if(p) s = p->kids[p->kids[0] == n]; 
	rb_swap_child(p, n, c);
	
	// n is now the node being removed from the tree. it is black.
	// c is its only child, or NULL if n is a leaf
	
	// d will be the 'double black' node
	// we fix the tree starting with d = q
	d = c;
	
	while(d != tree->root) { // "Case 1" d is (not) root
		// get the sibling. rb_sibling() may not work due to now-broken structure and NULLs
// 		s = p->kids[p->kids[0] == d]; 
// 		
// 		printf("\nrebalancing d:%s, s:%s\n", d?d->key:"-", s?s->key:"-");
		
		if(rb_is_red(d)) {
			rb_set_black(d);
			break;
		}
		
		if(rb_is_red(s)) { // s is red ("Case 2")
			rb_set_red(p);
			rb_set_black(s);
			
			if(!rb_is_left_child(s)) { // right case
// 				printf("Case 2, right. p:%s\n", p?p->key:"-");
				rb_rotate_left(tree, p);
			}
			else { // left case
// 				printf("Case 2, left. p:%s\n", p?p->key:"-");
				rb_rotate_right(tree, p);
			}
			
// 				fprintf(dbg, "End of Case 2");
				html_print_node(tree->root, get_max_height(tree->root)); html_spacer();

			// update sibling after rotations.
			// d and p stay unchanged
			/*if(s == tree->root) {
				printf("hacky root bail\n");
				rb_set_black(s);// root is always black
				break;
			}*/
			s = p ? p->kids[p->kids[0] == d] : NULL;
			
			// d is black, and the new s is black
		}

		// s is black
		if(rb_is_black(p)) {
			if(rb_is_black(s->kids[0]) && rb_is_black(s->kids[1])) {
// 				printf("Case 3, s:%s\n", s->key);
				// case 3, both kids of s are black
				rb_set_red(s);
				
				d = p;
				p = rb_parent(d);
				if(p) s = p->kids[p->kids[0] == d]; 
				
// 				printf("case 3 continue \n");
				continue; // restart balancing
			}
		}
		
		
		// s is known to be black because of above.
		if(rb_is_red(p) && rb_is_black(s->kids[0]) && rb_is_black(s->kids[1])) {
			// "Case 4", red p, black s children
// 			printf("Case 4\n");
			rb_set_red(s);
			rb_set_black(p);
			break; // balancing done
		}
		
		// at least one child of s must be red
		c = s->kids[0];
		s = p->kids[p->kids[0] == d];
		p = s->parent;
		
		if(rb_is_black(s)) {
			// "Case 5"
// 			printf("d:%p [%s],  d->p:%p\n", d, d?d->key:"-", d?d->parent:NULL);
// 			printf("s:%p [%s],  s->p:%p\n", s, s?s->key:"-", s?s->parent:NULL);
			if(!rb_is_left_child(s) && rb_is_red(s->kids[0]) && rb_is_black(s->kids[1])) {
				// s's left child is red, right is black
// 				printf("Case 5, left\n");
				rb_set_red(s);
				rb_set_black(s->kids[0]);
				rb_rotate_right(tree, s);
				
				s = p->kids[p->kids[0] == d];
				p = s->parent;
				// fall through to Case 6
			}
			else if(rb_is_left_child(s) && rb_is_red(s->kids[1]) && rb_is_black(s->kids[0])) {
				// s's left child is red, right is black
// 				printf("Case 5, right. s:%s\n", s->key);
				
				rb_set_red(s);
				rb_set_black(s->kids[1]);
				rb_rotate_left(tree, s);
				
				s = p->kids[p->kids[0] == d];
				p = s->parent;
				// fall through to Case 6
			}
		}
		
		// "Case 6"
		s->color = p->color;
		rb_set_black(p);
		
		if(!rb_is_left_child(s)) {
// 			printf("Case 6, left\n");
			rb_rotate_left(tree, p);
			rb_set_black(s->kids[1]);
		}
		else {
// 			printf("Case 6, right\n");
			rb_rotate_right(tree, p);
			rb_set_black(s->kids[0]);
		}
		
		break; // recoloring complete
	}
	
	// delete the removed child
	if(dead == tree->root) {
		tree->root = NULL;
	}
	else{
		rb_swap_child(dead->parent, dead, NULL); 
	}
	rb_free_node(dead);
	return;
}


void rb_trunc_node(rb_node* n) {
	if(!n) return;
	
	rb_trunc_node(n->kids[0]); 
	if(n->kids[0]) rb_free_node(n->kids[0]);
	
	rb_trunc_node(n->kids[1]); 
	if(n->kids[1]) rb_free_node(n->kids[1]);
}

void rb_trunc_(rb_tree_* t) { // TODO needs free fn
	rb_trunc_node(t->root);
	t->size = 0;
}

