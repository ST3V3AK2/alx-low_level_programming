#include "main.h"
#include <stdio.h>

/**
 * separator - prints a separator if n is not 98
 * @n: input number
 *
 * Return: void
 */

void separator(int n)
{
	if (n == 98)
		putchar('\n');
	else
		printf(", ");
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input number
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = 0; n < 98; i++)
		{
			printf("%d", n);
			separator(n);
			n--;
		}
		return;
	}
	else if (n < 98)
	{
		for (j = 0; n > 98; j++)
		{
			printf("%d", n);
			separator(n);
			n++;
		}
		return;
	}
	printf("98\n");
}
