#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	size_t depth = 0;

	if (tree == NULL)
		return 0;

	tmp = tree;
	while(tmp->parent != NULL)
	{
		depth += 1;
		tmp = tmp->parent;
	}
	return (depth);
}
