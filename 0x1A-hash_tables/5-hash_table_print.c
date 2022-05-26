#include "hash_tables.h"

/**
 * print_node - Print the node with the same index
 *
 * @node: the first node
 * @count: number of node printed
 */

void print_node(hash_node_t *node, int *count)
{
	hash_node_t *temp = node;

	while (temp)
	{
		if (*count == 0)
			printf("'%s': '%s'", temp->key, temp->value);
		else
			printf(", '%s': '%s'", temp->key, temp->value);
		(*count)++;
		temp = temp->next;
	}
}

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	int count = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			break;
		}
	}
	printf("{");
	print_node(node, &count);
	if (node)
	{
		i++;
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				print_node(node, &count);
			}
		}
	}
	printf("}\n");
}
