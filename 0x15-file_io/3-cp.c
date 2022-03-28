#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @ac: number of arguments
 * @av: arguments
 * Return: 1 if success
 */

int main(int ac, char **av)
{
	int fd1, fd2, r, w, c1, c2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		w = write(fd2, buf, r);
		if (w != r || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		if (c1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (c2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
