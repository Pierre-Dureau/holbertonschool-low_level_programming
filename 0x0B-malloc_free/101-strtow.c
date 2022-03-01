#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * lengthOfWord - Count the length of a word
 *
 * @s: The word
 *
 * Return: An int
 */

int lengthOfWord(char *s)
{
	int n = 0;
	char *temp;

	temp = s;
	for (; *s != ' ' && *s != '\0'; s++)
		n++;
	s = temp;
	return (n);
}

/**
 * countWord - Count the number of word in a string
 *
 * @s: The string
 *
 * Return: An int
 */

int countWord(char *s)
{
	int n = 0, check = 1;

	for (; *s; s++)
	{
		if (*s != ' ' && check == 1)
		{
			n++;
			check = 0;
		}

		if (*s == ' ')
			check = 1;
	}

	return (n);
}

/**
 * strtow - Split a string into words
 *
 * @str: The string
 *
 * Return: The string splited
 */

char **strtow(char *str)
{
	char **s;
	char *t;
	int i = 0, j = 0, n, ram;

	if (str == NULL || *str == '\0')
		return (NULL);

	t = str;
	n = countWord(str);
	if (n == 0)
		return (NULL);
	s = malloc((n + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	str = t;
	while (i < n)
	{
		if (*str != ' ')
		{
			ram = lengthOfWord(str);
			s[i] = (char *)malloc((ram + 1) * sizeof(char));

			for (j = 0; *str != ' ' && *str != '\0'; str++, j++)
				s[i][j] = *str;

			s[i][j] = '\0';
			i++;
		}
		else
			str++;
	}
	str = t;
	return (s);
}
