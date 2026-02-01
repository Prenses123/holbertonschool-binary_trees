#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measure the size (number of nodes) of a tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}