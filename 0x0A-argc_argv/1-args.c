#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the number of arguments passed followed by a new line
 * @argc: number of arguments passed to main
 * @argv: pointer to string contain arguments passed to main
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
