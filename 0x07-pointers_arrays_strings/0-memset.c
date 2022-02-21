#include "main.h"

/**
 * _memset - Fills a buffer with constant byte
 *
 * @s: The buffer
 * @b: The constant byte
 * @n: The size of changed bytes
 *
 * Return: The buffer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
