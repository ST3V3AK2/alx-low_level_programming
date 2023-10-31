#include "main.h"

/**
 * rdwr2file - reads 1024 bytes from a file and writes it to another
 * @file_from: file descriptor of file to be read from
 * @file_to: file descriptor of file to be written to
 * @av: array with name of files
 *
 * Return: 1 if the number of charcters read are less than 1024
 * 0 otherwise
 */

int rdwr2file(int file_from, int file_to, char **av)
{
	char buf[1024];
	ssize_t num_wr, num_rd;
	size_t count = 1024;

	num_rd = read(file_from, &buf, count);
	if (num_rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	num_wr = write(file_to, &buf, num_rd);
	if (num_wr == -1)
	{
		dprintf(2, "Error: Can't write to  file %s\n", av[2]);
		exit(99);
	}

	if (num_wr != 1024)
		return (1);
	return (0);
}

/**
 * main - create the cp shell commmand
 * @ac: no. of arguments passed to main
 * @av: array of pointers to string arguments
 *
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	int check, n, m;
	int file_from, file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	check = 0;
	while (check == 0)
		check = rdwr2file(file_from, file_to, av);

	n = close(file_from);
	m = close(file_to);
	if (n == -1 || m == -1)
	{
		if (n == -1)
			dprintf(2, "Error: Can't close fd %d\n", file_from);
		else
			dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
