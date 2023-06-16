#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string.
 *
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	int size = sizeof(s) - 1;

	if ()
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(*(s + 1));
}
