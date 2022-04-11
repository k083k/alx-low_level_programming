#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog input
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of Dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
