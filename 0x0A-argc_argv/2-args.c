#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints each of the arguments passed followed by a new line
 * @argc: number of arguments passed to main
 * @argv: pointer to string contain arguments passed to main
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
