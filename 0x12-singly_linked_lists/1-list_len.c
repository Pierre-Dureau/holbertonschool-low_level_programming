#include "lists.h"

/**
 * list_len - Count the number of element in a linked list
 *
 * @h: Head of the linked list
 * Return: Number of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
