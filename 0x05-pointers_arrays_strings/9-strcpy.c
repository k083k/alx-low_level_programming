#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: destinatin of copy
 * @src: source of copy
 *
 * Return: returns destination address
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
