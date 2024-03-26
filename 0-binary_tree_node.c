#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree
 * @parent: parent node of the binary tree
 * @value: the value to be stored in the parent node
 * Return: the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;

	return (new_node);
}
