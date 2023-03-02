#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL
 **/

int bin_tree_size(const binary_tree_t *tree)
{
	int size_bin_tree;

	if (tree == NULL)
		return (0);

	size_bin_tree = bin_tree_size(tree->left) + 1 +
		bin_tree_size(tree->right);

	return (size_bin_tree);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

int bin_tree_height(const binary_tree_t *tree)
{
	int right_knot, left_knot;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);

	left_knot = bin_tree_height(tree->left);
	right_knot = bin_tree_height(tree->right);

	if (right_knot >= left_knot)
		return (right_knot + 1);
	else
		return (left_knot + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_knot, right_knot;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	left_knot = bin_tree_size(tree->left);
	right_knot = bin_tree_size(tree->right);

	if ((bin_tree_height(tree)) && (left_knot == right_knot))
		return (1);

	return (0);
}
