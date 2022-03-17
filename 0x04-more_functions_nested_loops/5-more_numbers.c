#include "main.h"

/**
 * more_numbers - print 0-14 Ten times on separate lines
 */

void more_numbers(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{

			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
