#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of its parent
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in new node
 *
 * Function inserts a right child to parent, if right child already exists
 * it will set the new node's right child as the parent's previous right child
 *
 * Return: pointer to the new node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_right_child, *new_node;
	if (parent == NULL)
		return (NULL);
	old_right_child = parent->right;
	new_node = binary_tree_node(parent, value);
	if (new_node != NULL)
		new_node->right = old_right_child;
	return (new_node);
}
