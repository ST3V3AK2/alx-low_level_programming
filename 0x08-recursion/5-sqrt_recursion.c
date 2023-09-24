#include "main.h"

/**
 * sqrt - computes the squareroot of n
 * @x: input number
 * @y: first guess of the square root
 *
 * Return: square root of n
 */

int sqrt(int x, int y)
{
	if (x  == y * y)
		return(y);
	if (x < y * y)
		return (-1);
	return(sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - computes the squreroot of a number
 * @n: input number
 *
 * Return: squareroot of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (sqrt(n, 1));
}
