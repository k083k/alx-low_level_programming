#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous allocated memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *newPtr;
if (new_size == 0)
{
	if (ptr != NULL)
		free(ptr);
	return (NULL);
}
else if (!ptr)
{
	return (malloc(new_size));
}
else if (new_size <= old_size)
{
	return (ptr);
}
else
{
	newPtr = malloc(new_size);
	if (newPtr)
	{
		_memcpy(newPtr, ptr, old_size);
		free(ptr);
	}
	return (newPtr);
}

return (0);
}
