#include <stdio.h>
/**
 *main - print all possible combinations of two digits
 *Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
				}
				putchar(' ');
			}
		}
	}
	return (0);
}
