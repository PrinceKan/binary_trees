#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: size_t height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	for (; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
