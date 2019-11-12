#include "holberton.h"
/**
 *read_textfile - function that reads a text file
 *and prints it to the POSIX standard output.
 *@filename: file name
 *@letters: len of the text in the file
 *Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, countRead;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd < 0 || filename == NULL)
		return (0);
	buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);
	countRead = read(fd, buff, letters);

	write(STDOUT_FILENO, buff, countRead);

	free(buff);

	close(fd);
	return (countRead);
}
