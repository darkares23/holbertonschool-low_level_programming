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
	int fd, fd1, buff_len = 1024, writer = 0, closer;
	char buff[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: %s %s %s\n", av[0], av[1], av[2]), exit(97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (buff_len == 1024)
	{
		buff_len = read(fd, buff, 1024);
		if (buff_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		writer = write(fd1, buff, buff_len);
		if (writer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (buff_len == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
