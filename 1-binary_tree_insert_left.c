#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: parent
 * @value: value
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_left = NULL, *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	parent_left = parent->left;
	parent->left = node;

	if (parent_left)
	{
		parent_left->parent = node;
		node->left = parent_left;
	}

	return (node);
}
