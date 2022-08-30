#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: Linked list of Int
 * @size: Size of the list
 * @value: Value to search
 * Return: Node found or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, j, temp_i = 0;
	listint_t *node = list, *temp = list;

	if (!list || size == 0)
		return (NULL);

	while (i < size - 1)
	{
		if (value <= node->n)
			break;
		temp = node;
		temp_i = i;
		for (j = 0; node->next && j < jump; j++)
		{
			node = node->next;
			i++;
		}
		printf("Value checked at index [%ld] = [%d]\n", i, node->n);
	}
	if (i < size)
		printf("Value found between indexes [%ld] and [%ld]\n", temp_i, i);
	else
		printf("Value found between indexes [%ld] and [%ld]\n", temp_i, size - 1);

	node = temp;
	for (j = temp_i; node && j < size; j++)
	{
		printf("Value checked at index [%ld] = [%d]\n", j, node->n);
		if (value == node->n)
			return (node);
		node = node->next;
	}

	return (NULL);
}
