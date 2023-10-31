#include "main.h"

/**
 * read_textfile - reads a text file and prints its output
 * @filename: name of text file
 * @letters: number of letters to be read from file
 *
 * Return: on success, no. of letters read
 * on error, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t num_rd, num_wr;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	num_rd = read(fd, buf, letters);
	if (num_rd == -1)
		return (0);

	num_wr = write(STDOUT_FILENO, buf, num_rd);
	if (num_wr == -1)
		return (0);

	free(buf);
	close(fd);
	return (num_wr);
}
