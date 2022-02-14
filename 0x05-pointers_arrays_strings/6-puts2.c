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
 * puts2 - Print 1/2 char
 *
 * @str: The string to print
 */

void puts2(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}

	_putchar('\n');
}
