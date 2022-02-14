#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print a password with the sumof each char equal 2772
 *
 * Return: Always 0
 */

int main()
{
	char val;
	int sum = 0;

	srand(time(NULL));

	while (sum < 2646)
	{
		val = rand() % 126 + 1;
		sum =+ val;
		printf("%c", val);
	}

	sum = 2772 - sum;
	val = sum;
	printf("%c", val);

	return (0);
}
