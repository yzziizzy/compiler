#ifndef __rb_h__included__
#define __rb_h__included__





typedef struct rb_node {
	struct rb_node* parent;
	char* key;
	void* data;
	struct rb_node* kids[2];
	
	char color; // 1 == red
} rb_node;


typedef struct rb_tree_ {
	rb_node* root;
} rb_tree_;

#define rb_tree(t) \
union { \
	t* type; \
	rb_tree_ tree; \
}

rb_node* rb_bt_node_insert(rb_tree_* tree, rb_node* n, char* key, void* val);
void rb_insert_(rb_tree_* tree, char* key, void* val);

// tmp
 void rb_rotate_right(rb_tree_* tree, rb_node* n);
 void rb_rotate_left(rb_tree_* tree, rb_node* n) ;

rb_node* rb_new_node(rb_node* parent, char* key, void* data);
void print_tree(rb_node* n, int off);
#endif // __rb_h__included__
