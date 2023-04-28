#include "lists.h"

/* Author: Neville Otieno */

/**
 * free_list - Frees a list_t list.
 *
 * @head: A pointer to the head node of the list.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
