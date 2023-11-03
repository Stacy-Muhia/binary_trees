#include "binary_trees.h"

/**
 * binary_tree_insert_right - functions to insert a node
 * as the right-child of another node
 * @parent: the parent node which inserts the right-child in
 * @value: the value to be stored in the new node
 *
 * Return: pointer to the left node
 * else NULL(fail or parent is Null)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
