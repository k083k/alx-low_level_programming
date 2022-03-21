#include "main.h"

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
	for  (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
