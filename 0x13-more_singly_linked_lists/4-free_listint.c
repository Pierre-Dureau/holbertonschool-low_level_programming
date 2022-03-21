#include "lists.h"

/**
 * free_listint - Free a listint_t list
 *
 * @head: Head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *t = head;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
