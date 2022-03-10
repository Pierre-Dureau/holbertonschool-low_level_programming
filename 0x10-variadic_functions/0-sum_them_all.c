#include "variadic_functions.h"

/**
 * sum_them_all - count the sum of all the parameters
 *
 * @n: number of parameters
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		int sum = 0;
		unsigned int i;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);

		return (sum);
	}
	return (0);
}
