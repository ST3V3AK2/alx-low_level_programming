#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees an instance of a struct dog
 * @d: pointer to dog struct
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
