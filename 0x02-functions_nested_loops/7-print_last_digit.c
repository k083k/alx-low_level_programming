#include "main.h"

/**
 * print_last_digit - print out the last digit of a given int
 * @num: input for procession
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

	if (output < 0)
	{
		output *= -1;
	}

	_putchar(output + '0');

	return (output);
}
