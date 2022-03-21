#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list
 *
 * @head: Head of the list
 * Return: Address of the node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1, *t2;

	if (!*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);

	t2 = (*head);
	while ((*head)->next)
	{
		t1 = (*head)->next;
		(*head)->next = (*head)->next->next;
		t1->next = t2;
		t2 = t1;
	}
	*head = t2;

	return (*head);
}
