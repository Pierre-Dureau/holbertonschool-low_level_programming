#include "lists.h"

/**
 * free_list - Free every element of a linked list
 *
 * @head: Head of the linked list
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
