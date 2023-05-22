#include <stdio.h>

/**
 * main - Prints  possible combinations of two digit
 * n: Hundreth of digit
 * i: Tens of digit
 * l: Unit of digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;
	int l;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			for (l = 0; l < 10; l++)
			{
				if (n < l && i < l && n < i)
				{
					putchar('0' + n);
					putchar('0' + i);
					putchar('0' + l);
					if ((n + i + l) < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
