#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: the pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_knot;

	if (parent == NULL)
		return (NULL);
	new_knot = binary_tree_node(parent, value);
	if (new_knot == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		(parent->left)->parent = new_knot;
		new_knot->left = parent->left;
	}
	parent->left = new_knot;
	return (new_knot);
}
