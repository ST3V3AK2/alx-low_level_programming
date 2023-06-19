#include <stdio.h>

/**
 * factorial - computes the factorial of a number
 * @n: input number
 *
 * Return: factorial of n if n > 0 and -1 otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
