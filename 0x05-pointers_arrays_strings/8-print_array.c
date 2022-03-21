#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
