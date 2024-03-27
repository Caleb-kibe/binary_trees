#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_right - inserts a new node as the right child
 * of a parent node
 * @parent: pointer to the parent node
 * which the new right child will be inserted
 * @value: the value to be inserted to the new node
 * Return: the new right child, NULL if parent is NULL,
 * NULL if failed to create the new node
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
