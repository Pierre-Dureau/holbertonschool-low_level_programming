#include "main.h"

/**
 * wildcmp - compare two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if equal, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		s2++;

	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (0);
	}


	else if (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	else if (*s2 != '*')
	{
		s1++;
		if (*(s2 - 1) != '*')
			return (0);
	}

	return (wildcmp(s1, s2));
}
