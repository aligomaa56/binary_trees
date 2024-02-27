#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: root node of the tree
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_lft = 0, height_rig = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_lft = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_rig = 1 + binary_tree_height(tree->right);

	if (height_lft > height_rig)
		return (height_lft);

	return (height_rig);
}
