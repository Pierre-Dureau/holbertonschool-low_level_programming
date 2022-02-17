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
	char let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nb[5] = {'4', '3', '0', '7', '1'};
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == let[i])
			{
				*str = nb[i / 2];
			}
		}
		str++;
	}

	return (p);
}
