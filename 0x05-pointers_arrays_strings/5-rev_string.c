#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
    char temp;
    int i;
    int n = sizeof(s) - 1;

    for (i = 0; i < n; i--)
    {
        temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
    }
}