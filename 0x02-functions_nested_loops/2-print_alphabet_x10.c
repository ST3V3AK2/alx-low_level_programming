#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
