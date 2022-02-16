#include "main.h"

/**
 * _strcmp - Compare 2 strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if equal and another number if unequal
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			break;
		}

		s1++;
		s2++;
	}

	return (res);
}
