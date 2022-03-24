#include "main.h"

/**
 * _strcmp - compares two strings and returns in
 * @s1: string 1
 * @s2: string 2
 *
 * Return - return integer
 */

int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0;
	while (s1[x] != '\0')
	{
		if (s1[x] == s2[x])
		{
			y = s1[x] - s2[x];
			x++;
		}
		else
		{
			y = s1[x] - s2[x];
			break;
		}
	}
	return (y);
}
