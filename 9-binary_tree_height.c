#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_knot, left_knot;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);

	left_knot = binary_tree_height(tree->left);
	right_knot = binary_tree_height(tree->right);

	if (right_knot > left_knot)
		return (right_knot + 1);
	else
		return (left_knot + 1);
}
