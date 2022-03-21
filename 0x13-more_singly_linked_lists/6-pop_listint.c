#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *
 * @head: Head of the list
 * Return: data of the poped node
 */

int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	*head = (*head)->next;

	return (n);
}
