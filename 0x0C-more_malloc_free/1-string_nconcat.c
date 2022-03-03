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

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Number of char of s2 copied
 *
 * Return: The string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i = 0, j;

	if (len2 < n)
		n = len2;

	s = malloc((len1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (; len1 > 0 && *s1; s1++, i++)
		s[i] = *s1;
	j = i;
	for (; len2 > 0 && i < (n + j) && *s2; i++, s2++)
		s[i] = *s2;
	s[i] = '\0';

	return (s);

}
