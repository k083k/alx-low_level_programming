#include "lists.h"

/**
 * add_nodeint - add a new node at the start of linkedlist
 * @head: start of linked list
 * @n:counter
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	return (NULL);
}
