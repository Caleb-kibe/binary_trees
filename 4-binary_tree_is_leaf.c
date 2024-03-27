#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - checks if a node in a binary tree is a leaf
 * @node: the node to check
 * Return: 1 if it is a leaf, 0 if NULL or not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
