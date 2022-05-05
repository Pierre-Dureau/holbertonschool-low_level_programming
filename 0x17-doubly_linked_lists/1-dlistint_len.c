#include "lists.h"

/**
 * dlistint_len - Count number of node
 *
 * @h: head of the list
 * Return: Size
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
