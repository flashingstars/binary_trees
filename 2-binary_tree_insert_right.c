#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the righ of the tree
 *
 * @parent: pointer to the node to insert in
 * @value: value to be inserted
 *
 * Return: NULL on failure and the node on success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *OldNode = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = binary_tree_node(parent, value);
	else
	{
		OldNode = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = OldNode;
		OldNode->parent = parent->right;
	}
	return (parent->right);
}
