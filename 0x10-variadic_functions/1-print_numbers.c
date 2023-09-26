#include "variadic_functions.h"

/**
 * print_numbers - prints all its input numbers
 * @separator: string between numbers
 * @n: number of integers
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n <= 0 || separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
