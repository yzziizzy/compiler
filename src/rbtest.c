#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "rb.h"

#define TERM_COLOR_BLACK   "\x1b[30m"
#define TERM_COLOR_RED     "\x1b[31m"
#define TERM_COLOR_GREEN   "\x1b[32m"
#define TERM_COLOR_YELLOW  "\x1b[33m"
#define TERM_COLOR_BLUE    "\x1b[34m"
#define TERM_COLOR_MAGENTA "\x1b[35m"
#define TERM_COLOR_CYAN    "\x1b[36m"
#define TERM_COLOR_GRAY    "\x1b[37m"
#define TERM_RESET         "\x1b[0m"
#define TERM_BOLD          "\x1b[1m"
#define TERM_NORMAL        "\x1b[22m"
#define TERM_BK_BLACK      "\x1b[40m"
#define TERM_BK_RED        "\x1b[41m"
#define TERM_BK_GREEN      "\x1b[42m"
#define TERM_BK_YELLOW     "\x1b[43m"
#define TERM_BK_BLUE       "\x1b[44m"
#define TERM_BK_MAGENTA    "\x1b[45m"
#define TERM_BK_CYAN       "\x1b[46m"
#define TERM_BK_GRAY       "\x1b[47m"


void print_node_core(rb_node* n);
int rb_is_red(rb_node* n);

int get_depth(rb_node* n) {
	if(!n) return -1;
	
	int a = get_depth(n->kids[0]);
	int b = get_depth(n->kids[1]);
	
	return (a > b ? a : b) + 1;
}

int get_kids_to_left(rb_node* root) {
	if(!root->kids[0])
		return 0; 
	
	return 1 + get_kids_to_left(root->kids[0]);
}

void space_to_left(rb_node* r) {
// 	int n = get_kids_to_left(r);
	int n = 2 << get_depth(r);
	while(n--) printf(" ");
}

void print_level(rb_node* root, int lvl, int ol) {
	if(!root) return;
	if(lvl == 0) { 
 		
		print_node_core(root);
// 		printf("^");
// 		printf("\n");
		return;
	}
	
// 	printf("lvl %d, kids: %p %p\n", lvl, root->kids[0], root->kids[1]);
	if(lvl == 1) space_to_left(root->kids[0]); 
	print_level(root->kids[0], lvl - 1, ol + 1);
	if(lvl == 1) {
		int n = 2 << get_depth(root);
		while(n--) printf(" ");
	
	}
	print_level(root->kids[1], lvl - 1, ol + 1);
}


void print_level_lines(rb_node* root, int lvl, int ol) {
	if(!root) return;
	if(lvl == 0) { 
		int d = get_depth(root);
		int n = 2 << (d - 1);
		while(n--) printf(" ");
		printf("+");
		n = (2 << (d - 1)) - 1;
		while(n--) printf("-");
		printf("^");
		n = (2 << (d - 1)) - 1;
		while(n--) printf("-");
		printf("+");
		
// 		printf("\n");
		return;
	}
	
	print_level_lines(root->kids[0], lvl - 1, ol + 1);
	print_level_lines(root->kids[1], lvl - 1, ol + 1);
}

void print_node_core(rb_node* n) {
	if(!n) return;
	if(n->color)
		printf(TERM_COLOR_RED TERM_BOLD "O" TERM_RESET);
	else 
		printf(TERM_COLOR_GRAY TERM_BOLD "O" TERM_RESET);
}

char* keys[] = {
// 	"aaa", "aab", "aac", "aad", "aae", "aaf", "aag", "aah", "aai",
	"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
};

char* LLkeys[] = {"Z", "Y", "X", "W"};
char* LRkeys[] = {"Z", "X", "Y", "W"};
char* RRkeys[] = {"V", "W", "X", "Y"};
char* RLkeys[] = {"V", "X", "W", "Y"};


#define mask(x) (void*)((uint64_t)0xff & (uint64_t)(x)>>4)
void print_tree(rb_node* n, int off) {
	if(off > 200) return;
	if(!n) return;
	
	if(rb_is_red(n))
		printf(TERM_COLOR_RED "% *s%x " TERM_RESET " -> (%s)[%x, %x] ^%x\n", off, " ", mask(n), n->key, mask(n->kids[0]), mask(n->kids[1]), mask(n?n->parent:0));
	else
		printf("% *s%x -> (%s)[%x, %x] ^%x\n", off, " ", mask(n), n->key, mask(n->kids[0]), mask(n->kids[1]), mask(n?n->parent:0));
	
	print_tree(n->kids[0], off + 2);
	print_tree(n->kids[1], off + 2);
}

int check_black_height(rb_node* n) {
	if(!n) return 1;
	int a = check_black_height(n->kids[0]);
	int b = check_black_height(n->kids[1]);
	if(a != b) printf("\n\n!!! --- height mismatch at %s --------------\n\n", n->key);
	return a + !n->color;
}


int get_max_height(rb_node* n) {
	if(n == NULL) return 0;
	int a = get_max_height(n->kids[0]);
	int b = get_max_height(n->kids[1]);
	return (a > b ? a : b) + 1;
}


void html_print_node(rb_node* n, int h) {
	if(h == 0) return;
	
	char* type = n ? (rb_is_red(n) ? "red" : "black") : "dummy"; 
	char* barren = n ? ((n->kids[0] == NULL && n->kids[1] == NULL) ? " barren" : "") : "";
	
	fprintf(dbg, "<div class=\"node %s%s\">\n", type, barren);
		fprintf(dbg, "<div class=\"key\">%s</div>", n ? n->key : "");
		fprintf(dbg, "<div class=\"lines\"></div>");
		fprintf(dbg, "<div class=\"child left\">\n");
			html_print_node(n ? n->kids[0] : NULL, h-1);
		fprintf(dbg, "</div>\n");
		fprintf(dbg, "<div class=\"child right\">\n");
			html_print_node(n ? n->kids[1] : NULL, h-1);
		fprintf(dbg, "</div>\n");
	fprintf(dbg, "</div>\n");
	fflush(dbg);
}

void html_header() {
	fprintf(dbg, "<html>\n<head>\n");
	fprintf(dbg, "<link rel=\"stylesheet\" type=\"text/css\" href=\"debug.css\" />\n");
	fprintf(dbg, "</head>\n<body>\n");
}

void html_spacer() {
	fprintf(dbg, "<br><br><hr><br><br><br>");
}

void html_footer() {
	fprintf(dbg, "</body>\n</html>\n");
}	

char* Qkeys[] = {
// 	"Q","H","E","A","T","N","Ra","I","O","P","A","D","Ea", "Ia",
	"Z","Y","X","W","U","V","Ra","I","O","P","A","D","Ea", "Ia",
	
};

int main(int argc, char* argv[]) {
	
	FILE* f = fopen("./debug.html", "wb");
	dbg = f;
	html_header();
	
	rb_tree_ t;
	t.root = NULL;
	int val = 5;
	
	for(int i = 0; i < 12; i++) {
		rb_insert_(&t, Qkeys[i], &val);
		
		fprintf(f, "i: %d\n", i);
		html_print_node(t.root, get_max_height(t.root)); html_spacer();
		
		check_black_height(t.root);
		
		print_tree(t.root, 0);
		printf("\n\n");
	}
	rb_delete(&t, "V", NULL);
// 	rb_delete(&t, "N", NULL);
// 	rb_delete(&t, "Ra", NULL);
	
 	html_print_node(t.root, get_max_height(t.root)); html_spacer();
	fprintf(f, "Deleting\n");
	printf("----------\n");
	
	rb_delete(&t, "Z", NULL);
 	html_print_node(t.root, get_max_height(t.root)); html_spacer();
	
	html_footer();
	fclose(f);
	
// 	printf("depth: %d\n", get_depth(t.root));
// 	print_level(t.root, 0, 0); printf("\n");
// 	print_level_lines(t.root, 0, 0); printf("\n");
// 	print_level(t.root, 1, 0); printf("\n");
// 	print_level_lines(t.root, 1, 0); printf("\n");
// 	print_level(t.root, 2, 0); printf("\n");
// 	print_level_lines(t.root, 2, 0);  printf("\n");
// 	print_level(t.root, 3, 0); printf("\n");
// // 	print_level_lines(t.root, 3, 0);
// 	print_level(t.root, 4, 0);
	
	printf("\n\n");
	
	return 0;
}



