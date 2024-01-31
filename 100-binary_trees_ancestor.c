#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *ancestor;

if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

ancestor = (binary_tree_t *)second;
while (first != NULL)
{
while (ancestor != NULL)
{
if (first == ancestor)
return (ancestor);
ancestor = ancestor->parent;
}
ancestor = (binary_tree_t *)second;
first = first->parent;
}
return (NULL);
}
