#include "binary_trees.h"

/**
 * height - Helper to measure tree height (used only in this file)
 * @tree: Pointer to the root node
 *
 * Return: Height of tree, or 0 if tree is NULL
 */
static int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);

	return (1 + right_height);
}

/**
 * binary_tree_balance - Measure the balance factor of a tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor (left height - right height), 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (left_h - right_h);
}