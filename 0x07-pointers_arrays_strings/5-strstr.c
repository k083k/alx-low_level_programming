#include "main.h"
#include <stddef.h>


/**
 * _strstr - locates substring in haystack
 * @haystack: string to be searched
 * @neddle: substring to match
 *
 * Return: poimnter to match
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;


	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			{
				break;
			}
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return NULL;
}
