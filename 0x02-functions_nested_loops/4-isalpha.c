#include "main.h"

/**
 * _isalpha - prints 1 if c is a letter, lower or uppercase
 * @c: takes a character
 * Return: 1 if successful 0 otherwise
 */

int _isalpha(int c)
{
	char alpha;
	int output;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
