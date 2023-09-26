#include "function_pointers.h"
/**
 * main - prints its opcodes
 * @ac: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0.
 */

int main(int ac, char *argv[])
{
	char *bytes;
	int i, n;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	bytes = (char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", bytes[i]);
		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
