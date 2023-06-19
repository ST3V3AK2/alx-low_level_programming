#include "main.h"

/**
 * _print_rev_recursion - prints a string input string in reverse
 * @s: input string
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int size = sizeof(s) - 1;

	if (!(*s))
		return;
	_putchar(*s[size]);
	_print_rev_recursion(s - 1);
}
