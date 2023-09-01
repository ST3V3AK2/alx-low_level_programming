#include "main.h"
#include <stdio.h>

/**
 * main - prints number of input strings
 * @argc: number of strings in argv
 * @argv: pointer to input strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", *argc);
	return (0);
}
