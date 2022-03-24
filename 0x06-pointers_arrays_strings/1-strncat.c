#include "main.h"

/**
 * _strncat - concatenates one string with part of another string
 * @dest: destination string
 * @src: source string
 * @n: input n
 * Return: destination String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, y;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (y = 0; src[y] != src[n]; y++)
	{
		dest[i + y] = src[y];
	}
	dest[i + n] = '\0';

	return (dest);
}
