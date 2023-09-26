#include "variadic_functions.h"

/**
 * sum_them_all - sums all its input parameters
 * @n: number of input parameters
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, i;

	va_start(args, n);
	if (n <= 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
