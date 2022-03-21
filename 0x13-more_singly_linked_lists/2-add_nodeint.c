#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: Head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);

	t->n = n;
	t->next = *head;
	*head = t;

	return (t);
}
