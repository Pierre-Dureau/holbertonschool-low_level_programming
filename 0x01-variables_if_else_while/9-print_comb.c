#include <stdio.h>
/**
 *main - Print all single combinations of single digit numbers
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
