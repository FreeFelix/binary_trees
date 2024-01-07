#include"binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as a left-child of
 * another in a binary tree.
 * @parent: A pointer to the insert the left-child in.
 * @value: THe value to store in the new node.
 *
 * Return: If parent is NULL or an erro occurs - NULL
 * otherwise - a pinter to the new node.
 *
 * Description: If parent already has a left-child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
	return (NULL);
	}
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
