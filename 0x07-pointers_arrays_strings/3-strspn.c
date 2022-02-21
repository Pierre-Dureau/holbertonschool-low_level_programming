#include "main.h"

/**
 * @brief
 *
 * @param s
 * @param accept
 * @return unsigned
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	char *t = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				res++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}

		accept = t;
	}
	return (res);
}
