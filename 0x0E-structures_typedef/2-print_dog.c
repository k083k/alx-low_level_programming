#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - print the dog struct
 * @d: pointer to dog struct
 *
 * Return: Nothing (Void)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
