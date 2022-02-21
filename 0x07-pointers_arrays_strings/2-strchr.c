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
	for (; *s; s++)
	{
		if (*s == c)
			break;
	}

	if (!*s && c)
	{
		return (0);
	}

	return (s);
}
