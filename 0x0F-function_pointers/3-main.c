#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int (*ptr)(int, int) = get_op_func(argv[2]);
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char c = *argv[2];

		if (ptr == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		if ((c == '/' || c == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", ptr(num1, num2));
	}

	return (0);
}
