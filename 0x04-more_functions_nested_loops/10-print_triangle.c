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
			for (j = 0; j < size - 1 - i; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
