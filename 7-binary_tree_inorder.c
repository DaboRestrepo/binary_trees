#include "binary_trees.h"
/**
 * binary_tree_inorder - Go through a binary tree in order mode.
 * @tree: poiter to the root.
 * @func: pointer to a print function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
	else
		return;
}
