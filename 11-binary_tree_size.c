#include "binary_trees.h"

/**
 * binary_tree_size - counts all the nodes in a tree
 *
 * @tree: pointer to the tree
 * Return: Size of the binary tree or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += 1;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count);
}
