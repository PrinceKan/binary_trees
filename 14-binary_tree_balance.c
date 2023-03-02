#include "binary_trees.h"

/**
 * bin_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return:  int bin_tree_height or 0 if tree is NULL
 */

int bin_tree_height(const binary_tree_t *tree)
{
	int right_knot, left_knot;

	if (tree == NULL)
		return (0);

	right_knot = bin_tree_height(tree->right);
	left_knot = bin_tree_height(tree->left);

	if (right_knot >= left_knot)
		return (right_knot + 1);
	else
		return (left_knot + 1);
}


/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance count difference or 0 If tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bin_tree_height = 0;
	int right_bin_tree_height = 0;
	int balance_factor;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_bin_tree_height = bin_tree_height(tree->left);
	if (tree->right)
		right_bin_tree_height = bin_tree_height(tree->right);

	balance_factor = left_bin_tree_height - right_bin_tree_height;
	return (balance_factor);
}
