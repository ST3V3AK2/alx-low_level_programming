#include "main.h"

/**
 * _sqrt - computes the squareroot of n
 * @x: input number
 * @y: first guess of the square root
 *
 * Return: square root of n
 */

int _sqrt(int x, int y)
{
	if (x == y * y)
		return (y);
	if (x < y * y)
		return (-1);
	return (_sqrt(x, y + 1));
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
	return (_sqrt(n, 1));
}
