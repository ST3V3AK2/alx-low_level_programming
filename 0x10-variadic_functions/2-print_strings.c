#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: string to printed between numbers
 * @n: number of strings passed
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	int i;

	if (n == 0 || separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, int);
		if (str == NULL)
			printf("(nil)");

		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	_putchar('\n');
	va_end(args);
}
