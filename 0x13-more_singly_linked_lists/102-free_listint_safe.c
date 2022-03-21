#include "lists.h"

/**
 * free_listint_safe - Free a listint_t
 *
 * @head: head of the list
 * Return: Size of the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *t, *p;
	address_t *addr = NULL;

	if (!head)
		return (0);

	t = *head;
	*head = NULL;
	while (t)
	{
		p = t;
		add_nodeaddr(&addr, t);
		t = t->next;
		count++;
		free(p);

		if (compareAddr(addr, t) != NULL)
			break;
	}

	free_addr(&addr);
	return (count);
}
