#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of diagonal element in 2d array
 * @a: 2d array
 * @size: size of square array
 *
 * Return: nothing
 */


void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		diag1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		diag2 += a[i];
	}

	printf("%d, %d\n", diag1, diag2);
}
