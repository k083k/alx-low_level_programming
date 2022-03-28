#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of bytes to copy
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
