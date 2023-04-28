#include "lists.h"

/* Author: Neville Otieno */

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: A pointer to a pointer to the first node of the list
 * @str: The string to be added as the str member of the new node
 *
 * Return: A pointer to the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (!last_node)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
