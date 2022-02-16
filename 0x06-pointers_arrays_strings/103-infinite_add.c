#include "main.h"
#include <stdio.h>

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
 * addNum - Add the 2 strings of int
 *
 *
 *
 * Return: The result of the addition
 */

char *addNum(char *n1, char *n2, char *r, int i)
{
	int res, retenu;

	retenu = 0;
	i = i - 2;

	for (; *n1 && *n2; n1--, n2--, i--)
	{
		res = (*n1 - '0') + (*n2 - '0') + retenu;
		retenu = res / 10;
		r[i] = res % 10 + '0';
	}

	for (; *n1; n1--, i--)
	{
		res = *n1 - '0' + retenu;
		retenu = res / 10;
		r[i] = res % 10 + '0';
	}

	for (; *n2; n2--, i--)
	{
		res = *n2 - '0' + retenu;
		retenu = res / 10;
		r[i] = res % 10 + '0';
	}

	if (retenu > 0)
	{
		r[i] = retenu + '0';
		return (r + i);
	}

	return (r + i + 1);
}

/**
 * infinite_add - Add 2 numbers in string
 *
 * @n1: First int
 * @n2: Second int
 * @r: Result of the addition
 * @size_r: Size of the array r
 *
 * Return: The array r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lg1, lg2, first_digit;

	lg1 = _strlen(n1);
	lg2 = _strlen(n2);
	first_digit = (*n1 - '0') + (*n2 - '0');

	if ((lg1 >= size_r - 1 && first_digit > 9) || (lg2 >= size_r - 1 && first_digit > 9)
	 || (lg1 == size_r) || (lg2 == size_r))
	{
		return (0);
	}

	while (*n1 != '\0')
		n1++;

	while (*n2 != '\0')
		n2++;

	n1--;
	n2--;

	r[size_r - 1] = '\0';

	return (addNum(n1, n2, r, size_r));
}
