#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an int
 * @s: The string
 *
 * Return: The converted int
 */

int _atoi(char *s)
{
	int res = 0;
	int neg = 0;

	for ( ; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			neg++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			res = (*s - '0') + (res * 10);
		}
		else if (res > 0)
		{
			break;
		}

	}

	if (neg % 2 != 0)
	{
		res *= -1;
	}

	return (res);
}
