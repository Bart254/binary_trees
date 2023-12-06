#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right_child;

	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	right_child = tree->right;
	free(tree);
	binary_tree_delete(right_child);
}
