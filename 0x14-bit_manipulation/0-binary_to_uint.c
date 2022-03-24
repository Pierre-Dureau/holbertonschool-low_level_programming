#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 *
 * @b: Binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	char *t;
	unsigned int n = 0;
	unsigned int i = 1;

	if (!b)
		return (0);

	t = (void *)b;
	while (*t)
		t++;
	t--;

	for (i = 1; *t; t--, i *= 2)
	{
		if (*t != '0' && *t != '1')
			return (0);
		if (*t == '1')
			n += i;
	}

	return (n);
}
