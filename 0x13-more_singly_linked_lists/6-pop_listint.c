#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *
 * @head: Head of the list
 * Return: data of the poped node
 */

int pop_listint(listint_t **head)
{
	if (*head)
	{
		int n = (*head)->n;
		listint_t *t;

		t = *head;
		*head = (*head)->next;
		free(t);

		return (n);
	}
	else
		return (0);
}
