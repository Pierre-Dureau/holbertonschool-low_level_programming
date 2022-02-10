#include <ctype.h>
#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: the char to check
 *
 * Return: On success 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
