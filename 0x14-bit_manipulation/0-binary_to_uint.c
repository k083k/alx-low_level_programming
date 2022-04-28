#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned integer
 * @b: binray number to be converted
 *
 * Return: Converted unisigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len, x;
	unsigned int total = 0;

	if (!b)
	{
		return (0);
	}

	len = 0;
	while (b[len])
	{
		len++;
	}

	len = len - 1;
	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			x = b[i] & 1;
			total += x << len;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
