#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * separate number with a comma and should be arranged in
 * ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
