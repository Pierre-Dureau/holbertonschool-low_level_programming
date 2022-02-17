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
	int i;
	char *p = str;
	char *let = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == let[i])
			{
				*str = rot[i];
				break;
			}
		}
		str++;
	}

	return (p);
}
