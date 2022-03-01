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
	for (; *s != ' '; s++)
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
	int i = 0, j = 0, n;

	if (str == NULL || *str == '\0')
		return (NULL);

	t = str;
	n = countWord(str);
	s = malloc(n * sizeof(char *));
	if (s == NULL)
		return (NULL);

	str = t;
	while (*str)
	{
		if (*str != ' ')
		{
			s[i] = (char *)malloc(lengthOfWord(str) * sizeof(char));
			for (j = 0; *str != ' '; str++, j++)
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
