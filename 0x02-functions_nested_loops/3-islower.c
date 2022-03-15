#include "main.h"

/**
 * _islower - if c is lowercase returns 1 if it is and returns 0 if it's not
 * @c: takes an alphabet char
 * Return: 1 if successful 0 otherwise
 */

int _islower(char c)
{
	char alpha;
	int output;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c >= 'a' && c <= 'z')
		{
			output = 1;
		}
		else
		{
			output = 0;
		}
	}
	return (output);
}
