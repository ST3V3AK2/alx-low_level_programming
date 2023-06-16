#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the sum of two numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to string contain arguments passed to main
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]) != 0)
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
