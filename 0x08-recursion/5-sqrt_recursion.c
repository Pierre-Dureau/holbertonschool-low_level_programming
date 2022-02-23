#include "main.h"

/**
 * get_pow - Check if i*i = n
 *
 * @n: The number
 * @i: The checker
 *
 * Return: Success -> i / Fail -> -1
 */

int get_pow(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n <= i)
		return (-1);

	i++;
	return (get_pow(n, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: The number
 *
 * Return: Int
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (get_pow(n, i));
}
