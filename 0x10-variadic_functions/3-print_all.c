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
	char c, *str, *sep = "";
	double f;
	int i = 0, num;

	va_start(args, format);
	while(format[i])
	{
		switch(format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", sep, num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
	}
	va_end(args);
	_putchar('\n');
}
