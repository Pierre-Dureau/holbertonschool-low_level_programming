#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: printed between numbers
 * @n: number of int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list ap;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
			{
				if (separator)
					printf("%s", separator);
			}
			else
				printf("\n");
		}

		va_end(ap);
	}
	else
		printf("\n");
}
