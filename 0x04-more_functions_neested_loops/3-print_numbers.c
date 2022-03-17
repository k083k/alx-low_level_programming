#include "main.h"

/**
 * print_numbers - prints out numbers from 0 - 9, 0 and 9 inclusive
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
