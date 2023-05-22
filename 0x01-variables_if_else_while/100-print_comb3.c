#include <stdio.h>

/**
 * main - Prints  possible combinations of two digit
 * n: Tens of digit
 * i: unit of digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n < i)
			{
				putchar('0' + n);
				putchar('0' + i);
				if ((n + i) < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
