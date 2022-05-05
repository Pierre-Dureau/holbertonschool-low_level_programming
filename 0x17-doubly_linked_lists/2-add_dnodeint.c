#include "lists.h"

/**
 * add_dnodeint - Add node at the start of a dl list
 *
 * @head: Head of the list
 * @n: Value
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
