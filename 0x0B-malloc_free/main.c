#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
	char *buffer;

	buffer = argstostr(ac, av);
	if  (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", buffer);
	free(buffer);
	return (0);
}
