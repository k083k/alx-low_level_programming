#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates array of integers
 * @min: minimum input
 * @max: mazimum input
 *
 * Return: integer pointer
 */

int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);

	m = malloc((max - min + 1) * sizeof(int));

	if (m == 0)
		return (NULL);


	for (i = 0; min + i <= max; i++)
		m[i] = min + i;

	return (m);
}
