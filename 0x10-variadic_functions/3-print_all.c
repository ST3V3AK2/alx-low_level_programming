#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = ", ";
	unsigned int i;

	va_start(args, format);
	if (format == NULL)
		return;

	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				i++;
				continue;
				break;
		}
		if (format[i + 1] != '\0')
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
