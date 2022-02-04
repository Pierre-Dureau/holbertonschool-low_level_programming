#include <stdio.h>
/**
 *main - Print the numbers of base 16
 *Return: 0
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
