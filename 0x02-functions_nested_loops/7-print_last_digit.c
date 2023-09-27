#include "main.h"

/**
 * print_last_digit - prints the ladt digit of  a number
 * @n: input number
 *
 * Return: value of the last digit of n
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = n * -1;

	l = n % 10;
	_putchar('0' + l)
	return (l);
}
