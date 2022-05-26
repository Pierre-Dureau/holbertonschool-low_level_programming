#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
