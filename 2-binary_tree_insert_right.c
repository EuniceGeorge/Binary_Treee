#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	else if (parent->right == NULL)
	{
		newnode = binary_tree_node(parent, value);
		parent->right = newnode;
		return (newnode);
	}
	else if (parent->right != NULL)
	{
		newnode = binary_tree_node(parent->right->parent, value);
		parent->right->parent = newnode; //The parent-right is now the newnode created
		newnode->right = parent->right; //insert the value in the parent-right into the newnode -right
		parent->right = newnode; //the parent-right now holds the address of the newnode created
	}
	return (newnode);
	

}
