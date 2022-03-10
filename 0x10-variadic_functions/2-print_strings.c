#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 *
 * @separator: print between two numbers
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		char *s;
		va_list ap;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(ap, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");

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
