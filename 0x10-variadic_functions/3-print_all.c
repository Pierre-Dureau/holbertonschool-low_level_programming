#include "variadic_functions.h"

/**
 * print_all - print any type of variable
 *
 * @format: the list of different format to print
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;
	char *sep = "";

	va_start(ap, format);

	if (format)
	{
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
				s ? (printf("%s%s", sep, s)) : printf("(nil)");
				break;
			default:
				i++;
				continue;
			}
			i++;
			sep = ", ";
		}
	}

	printf("\n");
	va_end(ap);
}
