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
 * argstostr - Concatenate all the arguments
 *
 * @ac: Number of arguments
 * @av: The arguments
 *
 * Return: The string concatenated
 */

char *argstostr(int ac, char **av)
{
	char *s;
	char *t;
	int len = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
		len++;
	}

	s = malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	t = s;

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);

		for (j = 0; j < len; j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}

	s = t;
	return (s);
}
