#include "main.h"

/**
 * print_triangle - print right aligned triangle of hashes
 * @size: size of the triangle(no. of lines)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}

			for (j = size - (i - 1); j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
