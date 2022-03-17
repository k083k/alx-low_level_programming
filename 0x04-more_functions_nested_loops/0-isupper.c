#include "main.h"

/**
 * _isupper - checks if input is uppercase or otherwise
 * @c: input to be checked by isupper
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	return (0);
}
