#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string.
 *
 * Return: Void.
 */

void _puts_recursion(char *s)
{
    if (!(*s))
    {
        _putchar('\n');
        return;
    }
	_putchar(*s[1]);
	_puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return(0);
}
