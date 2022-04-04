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
	char *strcopy;
	int i;

	strcopy = malloc(sizeof(str));
	if (strcopy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			strcopy[i] = str[i];
		}
		return (strcopy);
	}
}
