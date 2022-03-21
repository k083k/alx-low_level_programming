#include "main.h"

/**
 * swap_int - swaps values of two integers
 * a: parameter a
 * b: parameter b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
