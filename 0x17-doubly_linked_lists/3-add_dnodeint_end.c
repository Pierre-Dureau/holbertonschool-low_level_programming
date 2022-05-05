#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of a dl list
 *
 * @head: Head of the list
 * @n: Value
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		new->prev = t;
		t->next = new;
	}

	return (new);
}
