#include "binary_trees.h"
/**
 * binary_tree_size - Measure the tree size.
 * @tree: a pointer to a parent node.
 * Return: 0 if tree is NULL and the size of the tree if not.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
