#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in.
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least one child in the tree,
 * or 0 is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	if (tree->left || tree->right)
	{
		/* If it has at least one child, count this node */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		/* If it's a leaf (no children), don't count this node */
		return (0);
	}
}
