#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: number of strings in argv
 * @argv: pointer to input strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, n;

	for (i == 1; i argc; i++)
	{
		n = atoi(argv[i]);
		if (n == 0 && argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
