#include "binary_trees.h"
/**
 * binary_tree_postorder - Go through the binary tree in postorder mode.
 * @tree: pointer to the root.
 * @func: pointer to a print function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
	else
		return;
}
