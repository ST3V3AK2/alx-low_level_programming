#include <stdio.h>
#include "main.h"

/**
 * is_sqrt - checks if input has a natural squraeroot
 * @n: input number
 * @i: divisor
 *
 * Return: square root if n has a natural square root and -1 if not
 */

int is_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (is_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of the n if n has one and -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (is_sqrt(n, 1));
}
