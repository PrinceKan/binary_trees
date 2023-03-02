#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node, NULL if node is NULL
 * or the parent is NULL; NULL If node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!(node) || !(node->parent))
		return (NULL);

	parent = node->parent;
	if (parent->left != node)
		return (parent->left);
	else
		return (parent->right);
}
