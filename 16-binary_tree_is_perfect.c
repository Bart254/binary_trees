#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree has 0 or 2 children
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree, right_tree;
	binary_tree_t *sib;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (tree->parent == NULL)
			return (1);
		if (tree->parent->left == tree)
			sib = tree->parent->right;
		else
			sib = tree->parent->left;
		if ((sib != NULL) && (sib->left == NULL && sib->right == NULL))
			return (1);
		return (0);
	}
	left_tree = 1 * binary_tree_is_perfect(tree->left);
	right_tree = 1 * binary_tree_is_perfect(tree->right);
	return (perf_comp(left_tree, right_tree));
}

/**
 * perf_comp - perf_compares the left and right tree
 * @left: int value of left tree
 * @right: int value of right tree
 *
 * The function captures the value of right and left tree
 * value of 1 means a tree is perfect, 0 means it's not perfect
 * Function then returns 1 if both are perfect and 0 if otherwise
 * Return: 1 if both are perfect, 0 if not
 */
int perf_comp(int left, int right)
{
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
