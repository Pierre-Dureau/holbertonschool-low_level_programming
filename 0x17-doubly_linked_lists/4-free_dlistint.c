#include "lists.h"

/**
 * free_dlistint - Free a dl list
 *
 * @head: Head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
