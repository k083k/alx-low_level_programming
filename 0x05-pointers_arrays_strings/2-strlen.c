#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: string parameter
 *
 * Return: return string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
