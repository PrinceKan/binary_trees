#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_bin_tree;

	if (tree == NULL)
		return (0);

	size_bin_tree = binary_tree_size(tree->left) + 1 +
		binary_tree_size(tree->right);

	return (size_bin_tree);
}
