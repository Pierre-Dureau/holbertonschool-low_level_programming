#include <stdio.h>

/**
 * main - Print the number of argument
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
