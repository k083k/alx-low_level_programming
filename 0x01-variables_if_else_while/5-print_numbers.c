#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * from 0 followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 10; base10++)
	{
		printf("%d\n", base10);
	}
	printf("\n");
	return (0);
