#include "main.h"

/**
 * check - Check each char of a string
 *
 * @s: The string
 * @len: Length of the string
 * @i: index in the string
 *
 * Return: 1 if the is a palindrome, 0 if not
 */

int check(char *s, int len, int i)
{
	if (*(s + i) != *(s + (len - (i + 1))))
		return (0);
	if (i == len / 2)
		return (1);

	i++;
	return(check(s, len, i));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: The string
 *
 * Return: Int
 */

int _strlen_recursion(char *s)
{
	int nb = 0;

	if (*s != '\0')
	{
		s++;
		nb = _strlen_recursion(s) + 1;
	}

	return (nb);
}

/**
 * is_palindrome - Check is the string is a plaindrome
 *
 * @s: The string
 *
 * Return: Int of check
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (0);

	return (check(s, len, i));
}
