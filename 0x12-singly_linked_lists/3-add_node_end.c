#include "lists.h"

/**
 * add_node_end - Add an element at the end of the linked list
 *
 * @head: The head of the linked list
 * @str: String of the element
 * Return: Adresse of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}

	return (new);
}
