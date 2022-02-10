#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if the int is a digit
 *
 * @n:The integer
 * Return: 1 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
