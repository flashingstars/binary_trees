#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with atleast 1 child
 *
 * @tree: The tree to count the node
 *
 * Return: The total number of nodes counted
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes + 1);
}
