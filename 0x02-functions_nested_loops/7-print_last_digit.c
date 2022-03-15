#include "main.h"

/**
 * print_last_digit - print out the last digit of a given int
 * @int - input
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int output;

	if (num < 0)
	{
		num *= -1;
	}

	output = num % 10;
	_putchar(output + '0');

	return (output);
}
