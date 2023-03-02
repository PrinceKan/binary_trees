#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left) == NULL && (tree->right) == NULL)
		return (1);

	else
	{
		int left_tree_full = binary_tree_is_full(tree->left);
		int right_tree_full = binary_tree_is_full(tree->right);
		int bin_tree_full = left_tree_full * right_tree_full;

		if (tree->left && tree->right)
			return (bin_tree_full);

		else
			return (0);
	}
}
