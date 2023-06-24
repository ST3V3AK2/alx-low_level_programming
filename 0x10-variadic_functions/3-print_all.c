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
	void *str;
	int n = sizeof(format) - 1;
	int i = 0;

	if (format == NULL)
		return;

	va_start(args, format);
	while(i < n)
	{
		switch (format[i])
		{
			case 'c':
				(char)str = va_arg(args, char);
				printf("%c", str);
				break;

			case 'i':
				(int)str = va_arg(args, int);
				printf("%d", str);
				break;

			case 'f':
				(float)str = va_arg(args, float);
				printf("%f", str);
				break;

			case 's':
				(char *)str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)")
				printf("%s", str);
				break;

			default:
				continue;
				break;

		}
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
