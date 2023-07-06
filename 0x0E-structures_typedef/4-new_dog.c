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
	dog1->name = malloc(sizeof(char) * strlen(name) + 1);
	if ((!dog->name))
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!dog->owner)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	dog1->age = age;
	strcpy(dog1->name, name);
	strcpy(dog_1->owner, owner);
	return (dog1);
}
