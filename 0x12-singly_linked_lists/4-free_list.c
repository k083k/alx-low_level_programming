#include "lists.h"

/**
 * free_list - free any allocated memory
 * @head: pointer to node
 *
 * Return: Nothing (void)
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
