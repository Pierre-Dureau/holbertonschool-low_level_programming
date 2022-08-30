#include "lists.h"

/**
 * free_addr - Free a address_t list
 *
 * @head: Head of the list
 */

void free_addr(address_t **head)
{
	if (head)
	{
		address_t *t;

		t = *head;

		while (*head)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
		}

		*head = NULL;
	}
}

/**
 * compareAddr - compare address
 *
 * @a: List of address
 * @t: The new address
 * Return: The address if there is a similitude
 */

address_t *compareAddr(address_t *a, listint_t *t)
{
	address_t *b = a;

	while (b)
	{
		if (b->a == (void *)t)
			return (b);
		b = b->next;
	}
	return (NULL);
}

/**
 * add_nodeaddr - adds a new node at the beginning of a address_t list
 *
 * @head: Head of the list
 * @a: Data
 * Return: The address of the new element
 */

address_t *add_nodeaddr(address_t **head, void *a)
{
	address_t *t;

	t = malloc(sizeof(address_t));
	if (t == NULL)
		return (NULL);

	t->a = a;
	t->next = *head;
	*head = t;

	return (t);
}

/**
 * print_listint_safe - Prints content of list, with failsafe for looped lists
 *
 * @head: Head of the list
 * Return: Size of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	address_t *addr = NULL;

	if (!head)
	{
		printf("0\n");
		exit(98);
	}


	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeaddr(&addr, (void *)head);
		head = head->next;
		count++;

		if (compareAddr(addr, (void *)head) != NULL)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	free_addr(&addr);
	return (count);
}
