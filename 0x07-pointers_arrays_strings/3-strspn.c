#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The string
 * @accept: The chars accepted
 *
 * Return: The length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	char *t = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				res++;
				break;
			}
		}

		if (*accept == '\0')
		{
			break;
		}

		accept = t;
	}
	return (res);
}
