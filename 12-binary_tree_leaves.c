#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the leaves of the tree.
 * @tree: pointer to the parent node.
 * Return: the count of the leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;
	else
		{
			if (tree->left != NULL)
				leaves += binary_tree_leaves(tree->left);
			if (tree->right != NULL)
				leaves += binary_tree_leaves(tree->right);
		}
	return (leaves);
}
