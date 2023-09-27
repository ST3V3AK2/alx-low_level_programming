#include "main.h"

/**
 * print_alphabet - prints all the letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
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
