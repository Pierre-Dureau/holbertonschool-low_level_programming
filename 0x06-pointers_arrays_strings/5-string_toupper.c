#include "main.h"

/**
 * string_toupper - Transform the lowercase to uppercase
 *
 * @str: The string to transform
 *
 * Return: The pointer to the string transformed
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ' ';
		}
		str++;
	}

	return (p);
}
