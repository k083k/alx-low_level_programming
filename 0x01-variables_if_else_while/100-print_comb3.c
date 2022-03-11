#include <stdio.h>

/**
 * main - function thst prints all possible different combinations of
 * two digits. separated by comma followed by space
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char digit1;
	char digit2;

	for(digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = '1'; digit2 <= '9'; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
