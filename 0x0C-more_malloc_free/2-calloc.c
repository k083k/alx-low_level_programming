#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;

return (ptr);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * nmemb);
		if (p == NULL)
		{
			return (NULL);
		}
		_memset(p, 0, nmemb * size);
		return (p);
	}
}
