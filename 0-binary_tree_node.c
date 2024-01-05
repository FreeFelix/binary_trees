#include"binary_trees.h"

/**
 * binary_tree_node - Function that create a node
 * @parent: A pointer to the parent of the node to create
 * a new node
 * @value: The value to put in the new node.
 *
 * Return: if an error occurs - Null
 * other wise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);

}
