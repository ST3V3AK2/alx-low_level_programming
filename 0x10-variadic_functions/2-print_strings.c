#include "variadic_functions.h"

/**
 * print_strings - prints all its input strings
 * @separator: string between numbers
 * @n: number of integers
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	if (n <= 0 || separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
