#include <stdio.h>
#include "3-calc.h"

/**
 * main - Test code
 * @argc: number of arguments to main
 * @agrv: string of arguments passed to main
 *
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b; 
	int result;
	int (*operator)(int)(int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (a == NULL || b == NULL)
	{
		printf("Error\n");
		return (-1)
	}
	operator = get_op_function(argv[2]);
	result = (*operator)(a, b);
	printf("%d", result\n);
	return (0);
}
