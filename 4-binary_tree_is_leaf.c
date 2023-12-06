#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 if is a leaf, 0 if it's not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
