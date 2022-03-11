#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * from 0 followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char base10;

	for (base10 = '0'; base10 <= '9'; base10++)
	{
		putchar(base10);
	}
	putchar('\n');

	return (0);
}
