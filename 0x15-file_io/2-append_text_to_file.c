#include "main.h"

/**
 * str_len - computes the length of a NULL terminated string
 * @str: input string
 *
 * Return: on success, number of characters in str
 * on error, 0
 */

int str_len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	return (i);
}

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of text file
 * @text_content: NULL terminated buffer to write to file
 *
 * Return: on success, 1
 * on error, -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t num_wr;
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = str_len(text_content);
	num_wr = write(fd, text_content, len);
	if (num_wr == -1)
		return (-1);

	close(fd);
	return (1);
}
