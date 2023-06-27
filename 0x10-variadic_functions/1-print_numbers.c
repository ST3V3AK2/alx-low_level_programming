#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to printed between numbers
 * @n: number of integers passed
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, num;

	if (n == 0 || separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	_putchar('\n');
	va_end(args);
}
