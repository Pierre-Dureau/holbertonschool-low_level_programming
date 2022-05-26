#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 *
 * @size: size of the hash table
 * Return: the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i = 0;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!sht->array)
		return (NULL);

	sht->shead = NULL;
	sht->stail = NULL;

	for (i = 0; i < sht->size; i++)
		sht->array[i] = NULL;

	return (sht);
}

/**
 * insert_node - insert the node into the sorted linked list
 * in a ASCII value order
 *
 * @sht: the sorted hash table
 * @node: the node to add
 */

void insert_node(shash_table_t *sht, shash_node_t *node)
{
	shash_node_t *tmp = NULL, *head = NULL;

	node->snext = NULL;
	node->sprev = NULL;

	if (sht->shead == NULL)
	{
		sht->shead = node;
		sht->stail = node;
	}
	else if (strcmp(node->key, sht->shead->key) <= 0)
	{
		node->snext = sht->shead;
		node->snext->sprev = node;
		sht->shead = node;
	}
	else
	{
		head = sht->shead;
		while (head->snext && strcmp(node->key, head->snext->key) > 0)
			head = head->snext;
		node->snext = head->snext;
		node->sprev = head;
		tmp = head->snext;
		head->snext = node;
		if (!tmp)
			sht->stail = node;
		else
			tmp->sprev = node;
	}
}

/**
 * shash_table_set - add a node into the hash table
 *
 * @sht: the sorted hash table
 * @key: the key
 * @value: the value
 * Return: 1 if success
 */

int shash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	shash_node_t *new_node, *node;
	unsigned long int index;

	if (!sht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, sht->size);
	node = sht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	insert_node(sht, new_node);
	new_node->next = sht->array[index];
	sht->array[index] = new_node;

	return (1);
}

/**
 * shash_table_get - get the value of a key
 *
 * @sht: the sorted hash table
 * @key: the key
 * Return: the value
 */

char *shash_table_get(const shash_table_t *sht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!sht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, sht->size);
	node = sht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node)
		return (node->value);
	else
		return (NULL);
}

/**
 * shash_table_print - print all the keys & values in the sorted
 * linked list order
 *
 * @sht: the sorted hash table
 */

void shash_table_print(const shash_table_t *sht)
{
	shash_node_t *head = NULL;

	if (!sht)
		return;

	printf("{");
	head = sht->shead;

	if (head->key)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->snext;
		while (head)
		{
			if (head->key)
				printf(", '%s': '%s'", head->key, head->value);
			head = head->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print all the keys & values in the sorted
 * linked list reverse order
 *
 * @sht: the sorted hash table
 */

void shash_table_print_rev(const shash_table_t *sht)
{
	shash_node_t *head = NULL;

	if (!sht)
		return;

	printf("{");
	head = sht->stail;

	if (head->key)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->sprev;
		while (head)
		{
			if (head->key)
				printf(", '%s': '%s'", head->key, head->value);
			head = head->sprev;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete the sorted hash table
 *
 * @sht: the sorted hash table
 */

void shash_table_delete(shash_table_t *sht)
{
	shash_node_t *temp;
	unsigned long int i;

	if (!sht)
		return;

	for (i = 0; i < sht->size; i++)
	{
		while (sht->array[i])
		{
			temp = sht->array[i];
			sht->array[i] = sht->array[i]->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
		free(sht->array[i]);
	}
	free(sht->array);
	free(sht);
}
