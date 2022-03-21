#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: Head of the list
 * @idx: Index of the given position
 * @n: Data of the new node
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *t1 = *head, *t2;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (t1 && i < idx - 1)
	{
		t1 = t1->next;
		i++;
	}

	if (i == idx - 1)
	{
		t2 = t1->next;
		t1->next = new;
		new->next = t2;

		return (new);
	}
	else
		return (NULL);
}
