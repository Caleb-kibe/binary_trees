#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - goes through a binary tree using inorder traversal
 * @tree: the binary tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
