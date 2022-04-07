#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
		return (p);
	}
}
