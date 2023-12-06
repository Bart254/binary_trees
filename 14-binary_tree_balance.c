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
		return (0);
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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balnce factor
 */
int binary_tree_balance(binary_tree_t *tree)
{
	int left_tree_height, right_tree_height;

	left_tree_height = binary_tree_height(tree->left);
	if (tree->left != NULL)
		left_tree_height++;
	right_tree_height = binary_tree_height(tree->right);
	if (tree->right != NULL)
		right_tree_height++;
	return (left_tree_height - right_tree_height);
}
