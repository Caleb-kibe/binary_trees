#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: the tree to find the size for
 * Return: the size of the tree, 0 if tree iS NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
