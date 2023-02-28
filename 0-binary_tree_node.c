#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: the pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_knot;

	new_knot = malloc(sizeof(binary_tree_t));

	if (new_knot != NULL)
	{
		new_knot->n = value;
		new_knot->parent = parent;
		new_knot->left = NULL;
		new_knot->right = NULL;
		return (new_knot);
	}
	return (NULL);
}
