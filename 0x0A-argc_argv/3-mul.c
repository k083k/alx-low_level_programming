#include <stdio.h>
#include <stdlib.h>


/**
 * main -program should multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 for Error, product for success
 */

int main(int argc, char *argv[])
{
	int product, a, b;

	argc = argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = (a * b);
		printf("%d\n", product);
		return (0);
	}
}
