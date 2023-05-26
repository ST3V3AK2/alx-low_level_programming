#include <unistd.h>

/**
 * _putchar - Prints characters
 * @c: characte
 *
 * Return: on success 1
 * on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
