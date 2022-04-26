#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - return the number of nodes in singlylinked list
 * @h: singly linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

