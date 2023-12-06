#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree in a preorder fashion
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to call for each node
 */
void binary_tree_preorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
