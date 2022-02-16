#include "main.h"

/**
 * rot13 - Encode a text in rot13
 *
 * @str: The string encoded
 *
 * Return: The pointer to the encoded string
 */

char *rot13(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			{
				*str += 13;
			}
			else
			{
				*str -= 13;
			}
			str++;
		}
		str++;
	}

	return (p);
}
