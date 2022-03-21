#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: Head of the list
 * @index: Index of the node
 * Return: The node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (i < index)
	{
		t = t->next;
		i++;
	}

	if (i == index)
		return (t);
	else
		return (NULL);
}
