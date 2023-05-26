#include "main.h"

/**
 * print_triangle - prints a triangle size n
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int n = size - 1 - i;

			for (j = 0; j < n; j++)
				_putchar(' ');
			for (j = 0; j < size - n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
