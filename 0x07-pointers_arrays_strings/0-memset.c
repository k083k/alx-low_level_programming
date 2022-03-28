#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be filled
 *
 * Return: new Array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
		}
	return (s);
}
