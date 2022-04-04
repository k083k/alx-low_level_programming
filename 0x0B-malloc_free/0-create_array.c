#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * @size: input of size
 * @c: input of char
 *
 * Return: size or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	if (size > 0)
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}

		while (i < size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
