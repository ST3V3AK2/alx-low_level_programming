#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the information in a struct
 * @d: input struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char nil[] = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", nil);
	if (d->age == 0)
		printf("Age: %s", nil);
	if (d->owner == NULL)
		printf("Owner: %s", nil);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
