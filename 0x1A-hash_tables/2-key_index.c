#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: the string
 * @size: size of the table
 * Return: index of the key with the hash
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
