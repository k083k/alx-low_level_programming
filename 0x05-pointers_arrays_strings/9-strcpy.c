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
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
