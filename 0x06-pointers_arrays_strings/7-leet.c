#include "main.h"

/**
 * leet - Encode a string into 1337
 *
 * @str: The string encoded
 *
 * Return: The pointer to the string encoded
 */

char *leet(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}

		if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}

		if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}

		if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}

		if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}

		str++;
	}

	return (p);
}
