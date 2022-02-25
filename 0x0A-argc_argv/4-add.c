#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - Check if a string is a number
 *
 * @s: The string
 *
 * Return: 1 if success, 0 if error
 */

int isNumber(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - Add positive number
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 if Error, 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int res = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (argc-- > 1)
		{
			if (isNumber(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
			i++;
		}

		printf("%d\n", res);
	}
	return (0);
}
