#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Ld, Rd;

	if (tree == NULL)
		return 0;
	Ld = binary_tree_depth(tree->left);
	Rd = binary_tree_depth(tree->right);

	if (Ld > Rd)
		return (Ld + 1);
	else
		return (Rd + 1);
}
