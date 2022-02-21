#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: The string
 * @needle: The substring
 *
 * Return: The pointer of the first occurence of the needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *t = haystack;

	for (; *needle; needle++)
	{
		for (; *haystack; haystack++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
		haystack = t;
	}
	return (0);
}
