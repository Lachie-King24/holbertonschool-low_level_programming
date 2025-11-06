#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog
 * Return: nothing if NULL
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
