#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: input/parameter
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
