#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string
 * @c: The character
 *
 * Return: The pointer to the first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; i++, s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
