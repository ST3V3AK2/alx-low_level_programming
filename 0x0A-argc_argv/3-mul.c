#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the product of two numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to string contain arguments passed to main
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 1)
		printf("Error\n");
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
