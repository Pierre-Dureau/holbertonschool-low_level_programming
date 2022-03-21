#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: Head of the list
 * @n: Value of the node
 * Return: Address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}

	return (new);
}
