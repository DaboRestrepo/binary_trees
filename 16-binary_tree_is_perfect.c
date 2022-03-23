#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if the node is leaf.
 * @node: pointer to a node to be check.
 * Return: 1 if is leaf, 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - Measure the tree height.
 * @tree: pointer to a parent node.
 * Return: the tree height. 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_side = 0, r_side = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_side = binary_tree_height(tree->left);
	r_side = binary_tree_height(tree->right);
	if (l_side > r_side)
		return (l_side + 1);
	return (r_side + 1);
}
/**
 * binary_tree_is_perfect - Check if the tree is perfect.
 * @tree: pointer to the node.
 * Return: 0 or 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
