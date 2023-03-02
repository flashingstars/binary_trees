#include "binary_trees.h"

/**
 * max - finds maximum height between two paths in a tree
 *
 * @left: Length of left path
 * @right: Length of right path
 *
 * Return: maximum between the two paths
 */

size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: tree to measure the height of
 * Return: the height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}

/**
 * binary_tree_balance - checking the balance factor of a tree
 *
 * @tree: Pointer to the root node
 *
 * Return: Balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
