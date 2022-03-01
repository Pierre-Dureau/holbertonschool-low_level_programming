#include "main.h"
#include <stdlib.h>

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
 * _strdup - copy of a string
 *
 * @str: The string
 *
 * Return: The string duplicated
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	if (str)
	{
		s = malloc((len + 1) * sizeof(char));

		if (s == NULL)
			return (NULL);

		for (i = 0; i < len; i++)
			s[i] = str[i];
	}
	else
		return (0);

	return (s);
}
