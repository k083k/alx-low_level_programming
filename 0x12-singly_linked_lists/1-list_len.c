#include "lists.h"
#include <stddef.h>

/**
 * list_len - return number of elements
 * @h: list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

