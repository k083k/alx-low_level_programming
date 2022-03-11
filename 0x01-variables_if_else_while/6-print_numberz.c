#include <stdio.h>

/**
 * main - function that prints all single digit starting
 * from 0 followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sinDig;

	for (sinDig = '0'; sinDig <= '9'; sinDig++)
	{
		putchar(sinDig);
	}
	putchar('\n');

	return (0);

}
