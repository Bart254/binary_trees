#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a the tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: size of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	return (left_height + right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balnce factor
 */
int binary_tree_balance(binary_tree_t *tree)
{
	size_t left_tree_size, right_tree_size;

	left_tree_size = binary_tree_size(tree->left);
	right_tree_size = binary_tree_size(tree->right);
	return (left_tree_size - right_tree_size);
}
