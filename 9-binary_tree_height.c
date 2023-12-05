#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node
 * @tree: pointer to the root node of the tree to measure height
 * Return: height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return 0;
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}

/**
 * max - returns the max between two integers
 * @a: first integer
 * @b: second integer
 * Return: max integer - 1
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
