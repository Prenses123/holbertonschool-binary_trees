#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
