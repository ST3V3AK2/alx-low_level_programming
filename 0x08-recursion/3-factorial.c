 #include "main.h"

/**
 * factorial - compute the factorial of a number
 * @n: input number
 *
 * Return: factorial of n
 */

int factoial(int n)
{
	if (n < 0)
		return (-1);
	if (!(n))
		return (1);
	return (n * factorial(n - 1));
}
