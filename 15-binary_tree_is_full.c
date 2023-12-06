#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree has 0 or 2 children
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return 0;
	if (tree->left == NULL && tree->right == NULL)
		return 1;
	left_tree = 1 * binary_tree_is_full(tree->left);
	right_tree = 1 * binary_tree_is_full(tree->right);
	return comp(left_tree, right_tree);
}

/**
 * comp - compares the left and right tree
 * @left: int value of left tree
 * @right: int value of right tree
 *
 * The function captures the value of right and left tree
 * value of 1 means a tree is full, 0 means it's not full
 * Function then returns 1 if both are full and 0 if otherwise
 * Return: 1 if both are full, 0 if not
 */
int comp(int left, int right)
{
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
