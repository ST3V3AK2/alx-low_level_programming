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
	char *str, *sep = "";
	int i = 0;

	va_start(args, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	_putchar('\n');
}
