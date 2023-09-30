#include "main.h"

/**
 * print_base2 - print the binary representation of a number
 * @n: input number
 *
 * Return: Void
 */

void print_base2(unsigned long int n)
{
	int b;

	if (n == 0)
		return;

	b = n % 2;
	print_base2(n / 2);
	_putchar('0' + b);
}

/**
 * print_binary - calls print_base2
 * @n: input number
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_base2(n);
}
