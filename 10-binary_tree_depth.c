#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	/* Recursively calculate the depth of the parent node */
	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
