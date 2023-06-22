#include "main.h"

/**
 * print_rev - pprints a string a reverse
 * @str: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
    int i;
    int n = sizeof(s) - 1;

    for (i = n; i >= 0; i--)
        _putchar(s[i]);
    _putchar('\n');
}