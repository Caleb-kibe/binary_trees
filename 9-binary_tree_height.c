#include "binary_trees.h"

/**
 * binary_tree_height - finds the maximum height of a binary tree
 * @tree: the binary tree to find the height for
 * Return: maximum height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	else
	{
		if (height_left >= height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
}
