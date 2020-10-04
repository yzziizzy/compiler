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
	size_t size;
} rb_tree_;

#define RB(t) \
union { \
	t* type; \
	rb_tree_ tree; \
}

rb_node* rb_bt_node_insert(rb_tree_* tree, rb_node* n, char* key, void* val);
void rb_insert_(rb_tree_* tree, char* key, void* val);
int rb_delete(rb_tree_* tree, char* key, void** data);

rb_node* rb_find(rb_tree_* tree, char* key);

void rb_trunc_(rb_tree_* t);

// tmp

 void rb_rotate_right(rb_tree_* tree, rb_node* n);
 void rb_rotate_left(rb_tree_* tree, rb_node* n) ;
void rb_delete_node(rb_tree_* tree, rb_node* n);
rb_node* rb_new_node(rb_node* parent, char* key, void* data);
void print_tree(rb_node* n, int off);


void html_print_node(rb_node* n, int h); 
void html_spacer();
int get_max_height(rb_node* n);

FILE* dbg;
#endif // __rb_h__included__
