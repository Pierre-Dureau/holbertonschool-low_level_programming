#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: The string
 *
 * Return: Int
 */

int _strlen_recursion(char *s)
{
	int nb = 0;

	if (*s != '\0')
	{
		s++;
		nb = _strlen_recursion(s) + 1;
	}

	return (nb);
}
