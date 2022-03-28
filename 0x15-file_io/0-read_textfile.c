#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: text of the file
 * Return: number of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	n = read(fd, buf, letters);
	if (n == -1)
		return (-1);
	buf[n] = '\0';

	w = write(STDOUT_FILENO, buf, n);
	if (w == -1)
		return (0);

	close(fd);
	free(buf);
	return (n);
}
