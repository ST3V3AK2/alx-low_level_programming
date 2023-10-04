#include "main.h"

/**
 * create_file - creates a file and fils it with a text
 * @filename: file's name
 * @text_content: input text
 *
 * Return: on success, 1
 * on error, -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_chk;
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, O_EXCL | 0600);
	if (fd == -1)
		return (-1);

	if (*text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			continue;

		w_chk = write(fd, text_content, i);
		if (w_chk == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
