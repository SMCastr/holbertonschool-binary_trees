#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	/* Recursively calculate the size of the left subtree */
	size += binary_tree_size(tree->left);

	/* Recursively calculate the size of the right subtree */
	size += binary_tree_size(tree->right);

	/* Count the current node */
	size++;

	return (size);
}
