#include "binary_trees.h"

/**
 * binary_tree_balance - Validate of a tree
 * @tree: Pointer to a tree
 *
 * Return: balance of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 1;
	int right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left -= 1;
	else
		left += binary_tree_height(tree->left);

	if (tree->right == NULL)
		right -= 1;
	else
		right += binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - Count the height of a tree
 * @tree: Pointer to a tree
 *
 * Return: Height of a tree
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
