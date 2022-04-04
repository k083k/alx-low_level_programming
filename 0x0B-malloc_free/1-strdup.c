#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated memory
 * @str: string input to copy
 *
 * Return: str or NULL
 */

char *_strdup(char *str)
{
	int i, size;
	char *copy;

	if (str != NULL)
	{

		for (i = 0; str[i] != '\0'; i++)
		{
			size++;
		}

		copy = malloc(sizeof(char) * size);
		if (copy == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			copy[i] = str[i];

		return (copy);
	}
	else
		return (NULL);
}
