#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Frees dogs
 * @d: pointer to dog to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
