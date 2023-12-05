#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks my functions
 * Return: Always 0
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 0);
	root->left = binary_tree_insert_left(root, 1);
	root->right = binary_tree_insert_right(root, 2);
	root->left->left = binary_tree_insert_left(root->left, 3);
	root->left->right = binary_tree_insert_right(root->left, 4);
	root->right->left = binary_tree_insert_left(root->right, 5);
	root->right->right = binary_tree_insert_right(root->right, 6);
	binary_tree_print(root);
	printf("The size of the tree is %lu\n", binary_tree_size(root->left->left));
	return (0);
}

