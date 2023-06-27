#include "variadic_functions.h"

/**
 * sum_them_all - sums all of the input parameters
 * @n: number of parameters
 *
 * Return: sum of n parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, num, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
