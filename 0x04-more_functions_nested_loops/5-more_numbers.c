#include "main.h"

/**
 * more_numbers - prints from 0 to 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar('0' + j);
		_putchar('\n');
	}
}
