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
	char c, *str;
	float f;
	int n = sizeof(format) - 1;
	int i = 0, num;

	if (format == NULL)
		return;

	va_start(args, format);
	while(i < n)
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;

			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;

			default:
				continue;
				break;

		}
		i++;
	}
	_putchar('\n');
	va_end(args);
}
