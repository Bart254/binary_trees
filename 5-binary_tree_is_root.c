#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is a root in a tree
 * @node: pointer to the node to be checked
 * Return: 1 if is root, 0 if node is NULL or not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}

