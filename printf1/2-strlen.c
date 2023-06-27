#include "main.h"

/**
 * _strlen - computes the length of the string
 * @s: pointer to the input string
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        continue;
    return (i);
}
