#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The string
 *
 * Return: Te pointer to the string transformed
 */

char *cap_string(char *str)
{
	char *p = str;
	int maj = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';'
		 || *str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '('
		 || *str == ')' || *str == '{' || *str == '}')
		{
			maj = 2;
		}

		if (*str == '\t')
		{
			*str = ' ';
		}

		if ((maj == 1) && (*str > 'z' || *str < 'a'))
		{
			maj = 0;
		}

		if ((maj == 1) && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ' ';
			maj = 0;
		}

		maj--;
		str++;
	}

	return (p);
}
