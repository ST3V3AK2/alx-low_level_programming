#include "dog.h"

/**
 * init_dog - initializes a struct for a dog
 * @d: the input struct
 * @name: input name
 * @age: input age
 * @owner: input owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
