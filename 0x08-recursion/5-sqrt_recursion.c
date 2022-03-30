#include "main.h"

/**
 * check - check and return natural square root of input
 * @n: input
 * @c: iterator
 *
 * Return: square root or -1
 */

int check(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + check(n, c + 1));
}

/**
 * _sqrt_recursion - return natural square root of input
 * @n: input
 *
 * Return: Natural SquareRoot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (check(n, 2));
}
