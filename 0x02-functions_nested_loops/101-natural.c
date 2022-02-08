#include "main.h"
#include <stdio.h>

/**
 * main - Print sum of multiple of 3 or 5
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int compteur;

	compteur = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			compteur += i;
		}
		else if (i % 5 == 0)
		{
			compteur += i;
		}
	}

	printf("%d\n", compteur);

	return (0);
}
