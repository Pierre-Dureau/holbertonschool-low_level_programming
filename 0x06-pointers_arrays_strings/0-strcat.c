#include "main.h"

/**
 * _strcat - Concatenate 2 strings
 *
 * @dest: The first string
 * @src: The second string
 *
 * Return: The string concatenate dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (p);
}
