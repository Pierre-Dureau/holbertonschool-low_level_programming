#include <ctype.h>
#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: the number to check
 *
 * Return: On success 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
