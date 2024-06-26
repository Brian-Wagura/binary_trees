#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 1;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		deep += binary_tree_depth(tree->parent);
		return (deep);
	}
	return (0);
}
