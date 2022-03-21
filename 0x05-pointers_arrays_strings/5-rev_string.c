#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string output
 * @s: input/parameter
 */

void rev_string(char *s)
{
	int len;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
