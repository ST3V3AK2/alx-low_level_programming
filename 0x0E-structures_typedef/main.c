#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}
