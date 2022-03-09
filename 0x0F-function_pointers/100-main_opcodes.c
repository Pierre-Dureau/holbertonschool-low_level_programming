#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 *
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num, i;
	char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	code = (char *)main;

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", *code);
		if (i != num - 1)
			printf(" ");
		else
			printf("\n");

		code++;
	}

	return (0);
}
