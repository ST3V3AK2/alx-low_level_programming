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

	if (n == 0 || seperator == NULL)
		return;

	va_start(args);
	for (i = 0; i < n; i++)
	{
		str = va_arg(n, int);
		if (str == NULL)
			printf("(nil)");

		printf("%s", str);
		if (i < n - 1)
			printf("%s", seperator);
	}
	_putchar('\n');
	va_end(args);
}
