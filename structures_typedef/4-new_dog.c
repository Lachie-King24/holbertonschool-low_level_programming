#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: THE DOG
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	if (name)
	{
		for (len = 0; name[len]; len++)
		;
		dog->name = malloc(len + 1);
		if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			dog->name[i] = name[i];
	}
	else
		dog->name = NULL;
	if (owner)
	{
		for (len = 0; owner[len]; len++)
		;
		dog->owner = malloc(len + 1);
		if (!dog->owner)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			dog->owner[i] = owner[i];
	}
	else
		dog->owner = NULL;
	dog->age = age;
	return (dog);
}
