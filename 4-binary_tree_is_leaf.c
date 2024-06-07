#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;
	else if (node->left == NULL && node->right == NULL)
		return 1;
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	return 0;
}
