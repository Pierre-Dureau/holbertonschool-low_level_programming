#include "variadic_functions.h"

/**
 * print_all - print any type of variable
 *
 * @format: the list of different format to print
 */

void print_all(const char * const format, ...)
{
	if (format)
	{
		va_list ap;
		int i = 0;
		char *s;
		char *sep = "";

		va_start(ap, format);

		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
				break;
			}
			i++;
			sep = ", ";
		}
		va_end(ap);
	}
	printf("\n");
}
