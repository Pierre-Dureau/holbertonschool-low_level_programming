#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list
 *
 * @head: Head of the list
 * Return: Address of the node where the loop start
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head;
	address_t *addr = NULL;

	if (!head)
		return (NULL);

	while (t)
	{
		add_nodeaddr(&addr, t);
		t = t->next;

		if (compareAddr(addr, t) != NULL)
		{
			free_addr(&addr);
			return (t);
		}
	}

	free_addr(&addr);
	return (NULL);
}
