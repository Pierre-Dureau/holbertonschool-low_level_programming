#include "lists.h"

/**
 * free_listint2 - Free a listint_t list
 *
 * @head: Head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *t, *p;

	t = *head;

	while (*head)
	{
		p = t;
		t = (*head)->next;
		free(*head);
		*head = t;
		free(p);
	}

	*head = NULL;
}
