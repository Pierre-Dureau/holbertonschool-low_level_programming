#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nodeint at index object
 *
 * @head: Head of the list
 * @index: Index of the node
 * Return: The node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}

	return (head);
}
