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
	int mul, tmp;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul >= 100)
			{
				tmp = mul % 100;
				_putchar('0' + mul / 100);
				_putchar('0' + tmp / 10);
			}
			else if (mul > 0 && mul < 100)
			{
				_putchar(' ');
				if (mul > 9)
					_putchar('0' + mul / 10);
				else
					_putchar(' ');
			}
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
