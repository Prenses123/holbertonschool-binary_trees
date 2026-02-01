#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle, or NULL on failure/no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grand = parent->parent;
	if (grand == NULL)
		return (NULL);

	if (grand->left == parent)
		return (grand->right);

	return (grand->left);
}