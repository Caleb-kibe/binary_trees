#include "binary_trees.h"

/**
 * get_height - finds the maximum height of a binary tree
 * @tree: the binary tree to find the height for
 * Return: maximum height, 0 if tree is NULL
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = get_height(tree->left);
	height_right = get_height(tree->right);

	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_height - finds the balance factor of a binary tree
 * @tree: the binary tree to find the blance factor for
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_height(tree->left) - get_height(tree->right));
}
