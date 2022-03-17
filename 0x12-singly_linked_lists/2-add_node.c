#include "lists.h"

/**
 * add_node - Add a new element to the linked list
 *
 * @head: First element of the list
 * @str: String of the element
 * Return: The adresse of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
