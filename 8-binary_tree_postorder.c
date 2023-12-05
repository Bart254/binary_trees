#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the tree in a post-order manner
 * @tree: pointer to the root node
 * @func: function to be called
 */
void binary_tree_postorder(binary_tree_t *tree, void (*func) (int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

