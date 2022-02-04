#include <stdio.h>

/**
 *main - Print all possible combinations of 3 digits
 *Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
