#include "lists.h"

/**
 * free_listint2 - Free a listint_t list
 *
 * @head: Head of the list
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *t;

		t = *head;

		while (*head)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
		}

		*head = NULL;
	}
}
