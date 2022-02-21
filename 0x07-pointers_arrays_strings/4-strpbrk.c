#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of byte
 *
 * @s: The string
 * @accept: The chars searched
 *
 * Return: The pointer to the start of the finding
 */

char *_strpbrk(char *s, char *accept)
{
	char *t = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		accept = t;
	}
	return (0);
}
