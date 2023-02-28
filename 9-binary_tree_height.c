#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_node = 0;
	int left_node = 0;

	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
			return (0);

		left_node = binary_tree_height(tree->left);
		right_node = binary_tree_height(tree->right);

		if (right_node <  left_node)
			return (right_node + 1);

		else
			return (left_node + 1);
	}
	return (0);
}
