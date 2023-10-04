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
	int fd, c, check;
	ssize_t i;

	if (filename == NULL)
		return (0);
	fd = open(filname, O_RDONLY | O_CREAT);
	if (fd == -1)
		return (0);

	for (i = 0; i < letters; i++)
	{
		if (c > 0)
		{
			c = read(fd, &c, sizeof(c));
			check = write(STDOUT_FILENO, &c, sizeof(c));
			if (check == -1)
				return (0);

		}
	}
	close(fd);
	return (i)
}
