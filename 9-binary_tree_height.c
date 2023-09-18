#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree)
	{
		left_height = 0;
		right_height = 0;

	/* compute the depth of each subtree */
	left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
	right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;
	/*return the corresponding height*/
	return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
