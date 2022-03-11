#include <stdio.h>

/**
 * main - print all different combinations of 3 digits
 * followed by a comma and a space
 *
 * Return: Always 0 (Success0
 */

int main(void)
{
	char one, two, three;

	for (one = '0'; one <= '7'; one++)
	{
		for (two = '1'; two <= '8'; two++)
		{
			for (three = '2'; three <= '9'; three++)
			{
				if (one < two && two < three)
				{
					putchar(one);
					putchar(two);
					putchar(three);
					if (one != '7' || two != '8' || three != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
