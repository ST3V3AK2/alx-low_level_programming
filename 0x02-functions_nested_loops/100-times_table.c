#include "main.h"

/**
 * print_times_table - prints the "n" times table
 * @n: input number
 *
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j;
	int mul;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul < 10)
				_putchar(' ');
			else
				_putchar('0' + mul / 10);
			_putchar('0' + mul % 10);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
