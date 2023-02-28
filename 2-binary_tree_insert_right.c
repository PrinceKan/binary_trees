#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: the pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_knot;

	if (parent == NULL)
		return (NULL);
	new_knot = binary_tree_node(parent, value);
	if (new_knot == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_knot;
	else
	{
		new_knot->right = parent->right;
		parent->right = new_knot;
		new_knot->right->parent = new_knot;
	}
	return (new_knot);
}
