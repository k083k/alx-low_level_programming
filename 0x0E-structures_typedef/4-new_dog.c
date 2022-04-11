#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - finds length of a string
 * @str: string to work on
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination of copy
 * @src: source of copy
 *
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creating new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of Dog
 *
 * Return: dog_t result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rufus;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	rufus = malloc(sizeof(dog_t));
	if (rufus == NULL)
	{
		return (NULL);
	}

	rufus->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (rufus->name == NULL)
	{
		free(rufus);
		return (NULL);
	}

	rufus->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (rufus->owner == NULL)
	{
		free(rufus->name);
		free(rufus);
		return (NULL);
	}

	rufus->name = _strcpy(rufus->name, name);
	rufus->age = age;
	rufus->owner = _strcpy(rufus->owner, owner);
	return (rufus);
}
