#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int n = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[n])
			n++;
		w = write(fd, text_content, n);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
