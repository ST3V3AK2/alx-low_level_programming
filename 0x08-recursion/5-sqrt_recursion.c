#include <stdio.h>

/**
 * is_sqrt - checks if input has a natural squraeroot
 * @n: input number
 * @i: divisor
 *
 * Return: square root if n has a natural square root and -1 if not
 */

int is_sqrt(int n, int i)
{
	if (n == i * i && i > 1)
		return (i);
	else if (i > n / 2)
		return (-1);
	is_sqrt(n, i + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of the n if n has one and -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}
