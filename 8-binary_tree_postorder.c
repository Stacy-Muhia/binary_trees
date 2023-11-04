#include "binary_trees.h"

/**
 * binary_tree_postorder - Fubcctions to snop thru binary tree
 * using post-order transversal
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * Return:nothing(if tree and func ids null)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
