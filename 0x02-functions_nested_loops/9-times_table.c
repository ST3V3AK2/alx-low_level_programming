#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul < 10 & j != 0)
				_putchar(' ');
			else
				_putchar('0' + mul / 10);
			_putchar('0' + mul % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
