#include <stdio.h>

/**
 *main - print all possible combinations of 2 - 2 digits numbers
 *Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i <= j && k <= l && i + j < k + l)
					{
						putchar(i % 10 + '0');
						putchar(j % 10 + '0');
						putchar(' ');
						putchar(k % 10 + '0');
						putchar(l % 10 + '0');
						if (i != 9 || j != 8 || k != 9 || l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
