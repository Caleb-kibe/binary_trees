#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree to count the leaves for
 * Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0;
	size_t leaves_right = 0;

	if (tree == NULL)
		return (0);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (leaves_left + leaves_right);
}
