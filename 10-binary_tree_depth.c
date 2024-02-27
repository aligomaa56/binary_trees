#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the
 * depth of a node in a binary tree
 * @tree: the node
 * Return: 0 or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
