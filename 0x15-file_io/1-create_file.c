#include "holberton.h"
/**
 *create_file - function that creates a file.
 *and prints it to the POSIX standard output.
 *@filename: file name
 *@text_content: len of the text in the file
 *Return: actual number of letters it could read and print
*/

int create_file(const char *filename, char *text_content)
{
	int fd, write_count = 0, writ;

	if (text_content == NULL)
		text_content = "";
	if (filename == NULL)
		return (-1);

	while (text_content[write_count] != '\0')
		write_count++;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd < 0)
		return (0);

	writ = write(fd, text_content, write_count);

	if (writ == -1)
		return (-1);

	if (close(fd) == -1)
		return (0);
	return (1);
}
