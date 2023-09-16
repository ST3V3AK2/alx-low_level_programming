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
	if (!d)
		return;
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
