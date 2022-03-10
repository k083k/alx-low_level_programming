#include <stdio.h>
/**
 * main - function to print out various types and their sizes using printf()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)", (int)(sizeof(c)));
	printf("Size of an int: %d byte(s)", (int)(sizeof(i)));
	printf("Size of a long int: %d byte(s)", (int)(sizeof(l)));
	printf("Size of a long long int: %d byte(s)", (int)(sizeof(lli)));
	printf("Size of a float: %d byte(s)", (int)(sizeof(f)));
	return (0);
}
