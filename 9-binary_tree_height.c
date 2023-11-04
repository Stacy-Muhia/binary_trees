#include "binary_trees.h"

/**
 * binary_tree_height - Functions to measure height
 * of the binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0(if tree is Null)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l , r;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
