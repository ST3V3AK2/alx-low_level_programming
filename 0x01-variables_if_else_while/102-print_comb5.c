#include <stdio.h>

/**
 * main - prints every possible combination of two digit numbers
 *
 * Return: Void.
 */

int main(void)
{
	int i, j;
	int d_i1, d_i2, d_j1, d_j2;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			d_i1 = i / 10;
			d_i2 = i % 10;
			d_j1 = j / 10;
			d_j2 = j % 10;
			if (i < j)
			{
				putchar('0' + d_i1);
				putchar('0' + d_i2);
				putchar(' ');
				putchar('0' + d_j1);
				putchar('0' + d_j2);
				if (i + j < 197)
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
