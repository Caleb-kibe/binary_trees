#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node to check
 * Return: 1 if it is a root, 0 if NULL or not a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
