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
	int i, j;
	char *copy;

	if (str != NULL)
	{

		for (j = 0; str[j] != '\0'; j++)
		{
			;
		}
		j = j + 1;

		copy = malloc(sizeof(char) * j);
		if (copy == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			copy[i] = str[i];

		return (copy);
	}
	else
		return (NULL);
}
