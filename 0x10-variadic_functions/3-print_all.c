#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments paseed to the function
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int n = sizeof(format) - 1;
	int i = 0;

	if (format == NULL)
		return;

	va_start(args);
	while(i < n)
	{
		switch (format[i])
		{
			case 'c':
				str = va_arg(n, char);
				printf("%c", str);
				break;

			case 'i':
				str = va_arg(n, int);
				printf("%d", str);
				break;

			case 'f':
				str = va_arg(n, float;
				printf("%f", str);
				break;

			case 's':
				str = va_arg(n, char *);
				if (str == NULL)
					printf("(nil)")
				printf("%s", str);
				break;

			default:
				continue;
				break;

		}
		if (i < n - 1)
			printf("%s", seperator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
