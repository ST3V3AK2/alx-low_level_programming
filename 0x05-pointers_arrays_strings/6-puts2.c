#include "main.h"

/**
 * _puts2 - prints every odd character of a string
 * @str: pointer to the input string
 *
 * Return: void
 */

void _puts2(char *str)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 == 0 || i == 0)
            _putchar(s[i]);
    }
    _putchar('\n');
}