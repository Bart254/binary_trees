#ifndef BINARY_TREE
#define BINARY_TREE
#include <stddef.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s  binary_tree_t;
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
int binary_tree_is_a_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(binary_tree_t *tree, void (*func)(int));
void print_num(int n);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(binary_tree_t *tree);
int max(int a, int b);
void binary_tree_print(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(binary_tree_t *tree);
size_t binary_tree_nodes(binary_tree_t *tree);
int binary_tree_balance(binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
int binary_tree_is_full(const binary_tree_t *tree);
int comp(int left, int right);
int perf_comp(int l, int r);
int binary_tree_is_perfect(const binary_tree_t *tree);

#endif

