#include "main.h"

/**
 * main - This function prints out a string followed
 * by a new line
 *
 * Description: you are not allowed to use standard libraries
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}

	_putchar('\n');
	return (0);
}
