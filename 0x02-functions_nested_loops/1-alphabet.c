#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */

voi print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
