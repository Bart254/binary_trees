#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of its parent
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in new node
 *
 * Function inserts a left child to parent, if left child already exists
 * it will set the new node's left child as the parent's previous eft child
 *
 * Return: pointer to the new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_left_child, *new_node;

	if (parent == NULL)
		return (NULL);
	old_left_child = parent->left;
	new_node = binary_tree_node(parent, value);
	parent->left = new_node;
	if (new_node != NULL)
		new_node->left = old_left_child;
	return (new_node);
}
