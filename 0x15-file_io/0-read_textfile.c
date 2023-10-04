#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: on success, number of letters printed
 * on error, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, c;
	ssize_t check;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	c = read(fd, buffer, letters);
	if (c != -1)
	{
		check = write(STDOUT_FILENO, buffer, letters);
		if (check < 0)
			return (0);
	}
	free(buffer);
	close(fd);
	return (check);
}
