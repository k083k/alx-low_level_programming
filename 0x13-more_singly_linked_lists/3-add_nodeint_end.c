#include "lists.h"

/**
 * add_nodeint_end - add node to end of linkedlist
 * @head: start of linkedlist
 * @n: integer
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *prev = *head;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (prev->next)
	{
		prev = (prev)->next;
	}
	prev->next = new_node;
	return (new_node);
}


