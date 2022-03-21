#include "lists.h"

/**
 * sum_listint - Calcul the sum of all the data of a listint_t list
 *
 * @head: Head of the list
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
