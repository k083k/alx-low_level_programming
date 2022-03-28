#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates char in string
 * @s: string to be searched
 * @c: characted to match
 *
 * Return: a pointer to the first match/ NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}	
	}
	return NULL;
}
