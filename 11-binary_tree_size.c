#include "binary_trees.h"

/**
 * binary_tree_size - Size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	/* Go to end of left tree */
	if (tree->left != NULL)
		/* Increment size */
		size += binary_tree_size(tree->left);

	/* Go to the end of right tree */
	if (tree->right != NULL)
		/* Increment size */
		size += binary_tree_size(tree->right);

	/* if node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (size);
}
