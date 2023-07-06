#include <stdio.h>
#include "dog.h"

/**
 * new_dog - takes in data and creates a new instance of dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: an instance of dog and NULL if it fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(struct dog));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
