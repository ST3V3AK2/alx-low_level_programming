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

	if (n == 0 || seperator == NULL)
		return;

	va_start(args);
	for (i = 0; i < n; i++)
	{
		num = va_arg(n, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", seperator);
	}
	_putchar('\n');
	va_end(args);
}
