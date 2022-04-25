#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: a pointer to the head
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		prev = (*head)->next;
		free(*head);
		*head = prev;
	}
}
