#include "holberton.h"
/**
* main - copy file.
* @ac: number of inputs
* @av: array of strings
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int fd, fd1, reader = 1024, writer = 0, closer;
	char *copy[1024];

	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: %s %s %s\n", av[0], av[1], av[2]), exit(97);
	fd = open(av[1], O_RDONLY, 0664);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, permissions);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (reader == 1024)
	{
		reader = read(fd, copy, 1024);
		if (reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		writer = write(fd1, copy, reader);
		if (writer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	closer = close(fd);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	closer = close(fd1);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
