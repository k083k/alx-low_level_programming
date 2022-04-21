#include "lists.h"
#include <stddef.h>

/**
 * add_node_end - add a new node to the end of list
 * @head: pointer to pointer oif type struct list_t
 * @str: string
 *
 * Return: Address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;

	return (*head);
}
