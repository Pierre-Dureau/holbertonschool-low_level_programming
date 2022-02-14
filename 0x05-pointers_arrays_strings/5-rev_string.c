/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - Reverse a string
 *
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	char c;
	char *start_p, *end_p;
	int i, len;

	len = _strlen(s);
	start_p = s;
	end_p = s;

	for (i = 0; i < len - 1; i++)
	{
		end_p++;
	}

	for (i = 0; i < len / 2; i++)
	{
		c = *end_p;
		*end_p = *start_p;
		*start_p = c;

		end_p--;
		start_p++;
	}
}
