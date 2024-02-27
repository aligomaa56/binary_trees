#include "binary_trees.h"

/**
 * binary_tree_height_balance - function that measures the
 * height of balance factor of a binary tree
 * @tree: node
 * Return: height
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t height_lft = 0, height_rgt = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_lft = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		height_rgt = 1 + binary_tree_height_balance(tree->right);

	if (height_lft > height_rgt)
		return (height_lft);

	return (height_rgt);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_lft = 0, height_rgt = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_lft = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		height_rgt = 1 + binary_tree_height_balance(tree->right);

	return (height_lft - height_rgt);
}
