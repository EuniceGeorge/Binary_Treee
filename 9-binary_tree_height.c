#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	size_t LH = 0;
       	size_t RH = 0;
	
	if (tree == NULL)
		return 0;

	tmp = tree;
	while(tmp->left != NULL)
	{
		tmp = tmp->left;
		LH += 1;
	}
	
	tmp = tree;	
	while(tmp->right != NULL)
	{
		tmp = tmp->right;
		RH += 1;
	}

	if (LH >= RH)
		return (LH);
	else
		return (RH);
}
