#include "main.h"

/**
 * _isdigit - checks for any number from 0 through 9
 * @c: input to be checked by _isdigit
 * Return: 1 if it is a digit, 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
