#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in the tree
 * @tree: pointer to the root node
 * Return: no of nodes
 */
size_t binary_tree_nodes(binary_tree_t *tree)
{
	static size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		no_of_nodes++;
	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);
	return (no_of_nodes);
}
