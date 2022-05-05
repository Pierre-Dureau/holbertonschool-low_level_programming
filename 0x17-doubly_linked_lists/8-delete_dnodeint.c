#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at an index
 *
 * @head: Head of the list
 * @index: Index
 * Return: 1 if success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *t = *head, *t2;

	if (*head != NULL)
	{
		if (index == 0)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
			if (t)
				t->prev = NULL;
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
				if (t->next)
					t->next->prev = t;
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
