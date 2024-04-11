#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary treey
 * @tree: Pointet to the root node of the tree
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1;
	size_t right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left += binary_tree_height(tree->left);
	if (tree->right != NULL)
		right += binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (MAX(left, right));
}
