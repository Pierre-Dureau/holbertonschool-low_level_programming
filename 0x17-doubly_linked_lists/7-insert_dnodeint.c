#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node a an index
 *
 * @h: Head of the list
 * @idx: Index
 * @n: Value
 * Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *t = *h, *t2;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (new->next)
			new->next->prev = new;
		*h = new;
		return (new);
	}

	while (t && i < idx - 1)
	{
		t = t->next;
		i++;
	}
	if (i == idx - 1 && t)
	{
		t2 = t->next;
		new->prev = t;
		new->next = t->next;
		t->next = new;
		if (t2)
			t2->prev = new;

		return (new);
	}
	else
		return (NULL);
}
