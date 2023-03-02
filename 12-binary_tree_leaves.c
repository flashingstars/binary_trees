#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 *
 * @tree: The tree root node being checked
 *
 * Return: Number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (leaves + 1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
