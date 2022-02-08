#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check for alphabetix character
 * @c: the character to check
 *
 * Return: On success 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
