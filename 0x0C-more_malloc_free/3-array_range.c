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
	int *arr, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	{
		return (NULL);
	}

	while (i <= max - min)
	{
		arr[i] = min + i;
	}
	return (arr);
}
