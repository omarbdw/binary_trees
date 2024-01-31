#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
size_t height = binary_tree_height(tree);
size_t i;
for (i = 1; i <= height + 1; i++)
binary_tree_levelorder_helper(tree, func, i);
}

/**
 * binary_tree_levelorder_helper - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * @level: Level of the tree to traverse
 *
 * Return: void
 */
void binary_tree_levelorder_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
if (tree == NULL)
return;
if (level == 1)
func(tree->n);
else if (level > 1)
{
binary_tree_levelorder_helper(tree->left, func, level - 1);
binary_tree_levelorder_helper(tree->right, func, level - 1);
}
}

