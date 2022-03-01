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
		i++;

	return (i);
}

/**
 * str_concat - Concatenates two strings
 *
 * @s1: String
 * @s2: String
 *
 * Return: The new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *str;

	if (s1)
		len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);
	i = 0;

	str = malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (; *s1; i++, s1++)
			str[i] = *s1;
	}

	if (s2 != NULL)
	{
		for (; *s2; i++, s2++)
			str[i] = *s2;
	}

	if (s1 == NULL && s2 == NULL)
		str[i] = '\0';

	return (str);
}
