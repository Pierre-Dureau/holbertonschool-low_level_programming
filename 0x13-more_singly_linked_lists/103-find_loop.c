#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list
 *
 * @head: Head of the list
 * Return: Address of the node where the loop start
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1 = head, *p2 = head;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);

	while (p1 && p1->next)
	{
		p1 = p1->next->next;
		p2 = p2->next;

		if (p1 == p2)
		{
			p2 = head;
			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			return (p1);
		}
	}

	return (NULL);
}
