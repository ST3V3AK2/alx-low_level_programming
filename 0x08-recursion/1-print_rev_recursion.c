#include "main.h"

/**
 * _print_rev_recursion - prints a string input string in reverse
 * @s: input string
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
