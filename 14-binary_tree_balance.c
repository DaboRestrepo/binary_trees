#include "binary_trees.h"
/**
 * binary_tree_height - Measure the tree height.
 * @tree: pointer to a parent node.
 * Return: the tree height. 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_side = 0, r_side = 0;

	if (tree == NULL)
		return (0);
	l_side = binary_tree_height(tree->left);
	r_side = binary_tree_height(tree->right);
	if (l_side > r_side)
		return (l_side + 1);
	return (r_side + 1);
}

/**
 * binary_tree_balance - Calculate the factor balance.
 * @tree: pointer to a parent node.
 * Return: The balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return (height_l - height_r);
}
