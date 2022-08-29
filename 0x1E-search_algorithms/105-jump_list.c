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
	size_t jump = sqrt(size), i = 0, j;
	listint_t *node = list, *temp = list;

	if (!list || size == 0)
		return (NULL);

	while (node && i < size)
	{
		if (value <= node->n)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, node->n);
		temp = node;
		for (j = 0; node && j < jump; j++)
			node = node->next;
		i = i + jump;
	}
	if (i < size)
		printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
	else
		printf("Value found between indexes [%ld] and [%ld]\n", i - jump, size - 1);

	node = temp;
	for (j = i - jump; node && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, node->n);
		if (value == node->n)
			return (node);
		node = node->next;
	}

	return (NULL);
}
