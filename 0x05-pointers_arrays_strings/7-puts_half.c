#include "main.h"

/**
 * put_half - prints the last half of a string
 * @str: pointer to the input string
 *
 * Return: void
 */

void puts_half(char *str)
{
    int i;
    int n = sizeof(str);

    if (n % 2 != 0)
        n = (n - 1) / 2;
    for (i = n/2; i <= n; i++)
            _putchar(s[i]);
    _putchar('\n');
}