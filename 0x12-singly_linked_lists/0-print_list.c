#include "lists.h"

/**
 * print_list - Print string et length of the string of each element
 *
 * @h: The head of the linked list
 * Return: Number of struct in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	count++;
	return (count);
}
