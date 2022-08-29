#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: Linked list of Int
 * @value: Value to search
 * Return: The node found or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *temp = list;

	while (node && node->express)
	{
		node = node->express;
		if (node)
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node && value < node->n)
			break;
		temp = node;
	}
	if (temp == node)
	{
		while (node->next)
			node = node->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	temp->index, node->index);

	while (temp)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (value == temp->n)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
