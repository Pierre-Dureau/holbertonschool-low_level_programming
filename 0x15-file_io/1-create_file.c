#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int n = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
