#include <stdio.h>

/**
 * print_binary - prints input number in binary
 * @n: input number
 * @count: number of characters printed
 *
 * Return: number of characters printed
 */

int print_binary(int n, int count)
{
	if (n <= 0)
		return (count);
	int i = n % 2;

	print_binary(n / 2, count + 1);
	putchar('0' + i);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int check;
	int output1, output2;
	char str[] = "Let's see if this works";

	output1 = printf("%s\n", str);
	output2 = print_binary(4, 0);
	check = 1 % 2;
	printf("\noutput1: %d\noutput2: %c\ncheck: %d\n", output1, output2, check);
	return (0);
}
