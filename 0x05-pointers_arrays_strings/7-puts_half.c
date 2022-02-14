#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * puts_half - Print the second half of a string
 *
 * @str: The string
 */

void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
		{
			str++;
		}
	}
	else
	{
		for (i = 0; i < (len + 1) / 2; i++)
		{
			str++;
		}
	}

	for (i = i; i < len; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
