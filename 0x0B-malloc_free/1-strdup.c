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

	len = _strlen(str);

	if (len > 0)
	{
		s = malloc(len * sizeof(char));

		if (s == NULL)
			return (NULL);

		for (i = 0; i < len; i++)
			s[i] = str[i];
	}
	else
		return (NULL);

	return (s);
}
