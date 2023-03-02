#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_parent;

	if (!node || (!(node->parent) || !((node->parent)->parent)))
		return (NULL);

	node_parent = ((node->parent)->parent);
	if (node->parent == (node_parent->left))
		return (node_parent->right);
	else
		return (node_parent->left);
}
