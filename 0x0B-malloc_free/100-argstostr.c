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
 * @brief
 *
 * @param ac
 * @param av
 * @return char*
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	char *s, *t;
	int len, i, j;

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
		len++;
	}

	s = malloc(len * sizeof(char));
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
