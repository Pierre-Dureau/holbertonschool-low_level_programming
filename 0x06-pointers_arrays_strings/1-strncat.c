#include "main.h"

/**
 * _strncat - Concatenate 2 strings with only n char
 *
 * @dest: The first string
 * @src: The second string
 * @n: The number of char concatenate
 *
 * Return: The pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((i < n) && (*src != '\0'))
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}

	*dest = '\0';

	return (p);
}
