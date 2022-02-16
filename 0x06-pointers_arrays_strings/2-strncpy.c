#include "main.h"

/**
 * _strncpy - Copy the second string to the first with only n char
 *
 * @dest: The first string
 * @src: The second string
 * @n: The number of char copied
 *
 * Return: The copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
