#include "main.h"

/**
 * get_prime - Check if the number is divisible by i
 *
 * @n: The number
 * @i: The checker
 *
 * Return: 1 if prime, 0 if not
 */

int get_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n - 1)
		return (1);

	i++;
	return (get_prime(n, i));
}

/**
 * is_prime_number - Check if the number is a prime number
 *
 * @n: The number
 *
 * Return: Result of get_prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	return (get_prime(n, i));
}
