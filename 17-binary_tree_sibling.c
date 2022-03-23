#include "binary_trees.h"
/**
 * binary_tree_sibling - check if the node has a sibling.
 * @node: pointer to a node to check.
 * Return: pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
