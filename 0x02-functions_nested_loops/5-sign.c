#include "main.h"

/**
 * print_sign - checks if input is positive or negative
 * @n: integer, positive or negative
 * Return: return 1 & + if positive, 0 & 0 if zero and -1 and - if negative
 *
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -1;
	}
	else
	{
		_putchar('0');
		num = 0;
	}
	return (num);
}
