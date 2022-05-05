#include "lists.h"

/**
 * sum_dlistint - get the sum of all the value of a dl list
 *
 * @head: Head of the list
 * Return: Int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
