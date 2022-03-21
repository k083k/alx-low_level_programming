#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
