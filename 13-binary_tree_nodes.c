#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes of tree with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		nodes += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		nodes += binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (nodes);
}
