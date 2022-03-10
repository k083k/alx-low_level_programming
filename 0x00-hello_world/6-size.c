#include <stdio.h>
/**
 * main - outputs sizes of various types
 *
 * Return: Always 0 
 */

int main(void)
{
	int a;
	char b;
	long c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(e));
	return (0);
}
