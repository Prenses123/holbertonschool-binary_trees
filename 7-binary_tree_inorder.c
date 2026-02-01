#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Inorder traversal of a binary tree
 * @tree: Pointer to the root node of the tree
 * @func: Function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}