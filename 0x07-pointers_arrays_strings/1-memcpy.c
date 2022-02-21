#include "main.h"

/**
 * _memcpy - Copies memory data
 *
 * @dest: The buffer
 * @src: The memory data
 * @n: The sized of changed bytes
 *
 * Return: The buffer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *t = dest;

	for (i = 0; i < n; i++, dest++)
	{
		*dest = src[i];
	}

	return (t);
}
