#include <stdlib.h>
#include <string.h>
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
	if (head == NULL)
		return NULL;

	if (str == NULL)
		return NULL;

	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
		return NULL;

	new->str = strdup(str);
	if (new->str == NULL)
		free(new);
	return NULL;

	int len = 0;
	while (str[len] != '\0')
		len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	*head = new;
	else {
		list_t *last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

		return *head;
}
