#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: result of concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, totallength;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	totallength = (i + j) + 1;

	concat = malloc(sizeof(char) * totallength);
	if (concat !=  NULL)
	{

		i = 0;
		j = 0;

		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];

		for (j = 0; s2[j] != '\0'; j++)
			concat[i + j] = s2[j];

		return (concat);
	}
	else
		return (NULL);
}
