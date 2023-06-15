#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the sum of two numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to string contain arguments passed to main
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc <= 1)
		printf("Error\n");
	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
