#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints  alphabets in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar (alpha);
	}
	putchar('\n');
	return (0);
}
