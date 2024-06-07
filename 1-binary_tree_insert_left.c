#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t * newnode;
	
	if (parent == NULL)
		return NULL;

	else if (parent->left == NULL)
	{
		newnode = binary_tree_node(parent, value);
		parent->left = newnode;
		return (newnode);
	}

	else if	(parent->left != NULL)
	{
		newnode = binary_tree_node(parent->left->parent, value);
		parent->left->parent = newnode;
		newnode->left = parent->left;
		parent->left = newnode;
	}
	return(newnode);
}
