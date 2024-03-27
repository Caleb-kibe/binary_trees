#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in binary tree
 * @tree: the node to find depth for
 * Return: depth of the node, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
