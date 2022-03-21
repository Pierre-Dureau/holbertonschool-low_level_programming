#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at an index
 *
 * @head: Head of the list
 * @index: Index of the node
 * Return: 1 if Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = *head, *t2;

	if (*head != NULL)
	{
		if (index == 0)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
			return (1);
		}

		while (t->next && i < index - 1)
		{
			t = t->next;
			i++;
		}

		if (i == index - 1)
		{
			if (t->next != NULL)
			{
				t2 = t->next;
				t->next = t->next->next;
				free(t2);

				return (1);
			}
			else
				return (-1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}
