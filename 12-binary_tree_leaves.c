#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in the tree
 * @tree: pointer to the root node
 * Return: no of leaves
 */
size_t binary_tree_leaves(binary_tree_t *tree)
{
	static size_t no_of_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		no_of_leaves++;
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);
	return (no_of_leaves);
}
