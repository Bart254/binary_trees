#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to a node whose depth we want to find
 * Return: depth of the node
 */
size_t binary_tree_depth(binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	for(depth = 0; tree->parent; tree = tree->parent, depth++);
	return (depth);
}

