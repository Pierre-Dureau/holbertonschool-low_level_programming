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
 * findValue - find the maximal value to change
 *
 * @coin: the number of coin to change
 * @change: the rest to change
 *
 * Return: change
 */

int findValue(int *coin, int change)
{
	if (change >= 25)
	{
		change -= 25;
		coin[0] += 1;
	}
	else if (change >= 10)
	{
		change -= 10;
		coin[0] += 1;
	}
	else if (change >= 5)
	{
		change -= 5;
		coin[0] += 1;
	}
	else if (change >= 2)
	{
		change -= 2;
		coin[0] += 1;
	}
	else
	{
		change -= 1;
		coin[0] += 1;
	}

	return (change);
}

/**
 * main - Print the minimum number of coins to make the change
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 if Error, 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int change = atoi(argv[1]);
		int coins[1];

		coins[0] = 0;

		while (change != 0)
		{
			if (isNumber(coins[0]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			change = findValue(coins, change);
		}
		printf("%d\n", coins[0]);
	}
	return (0);
}