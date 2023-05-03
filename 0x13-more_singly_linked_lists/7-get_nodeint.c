#include <stdlib.h>
#include <string.h>
#include "lists.h"

/* Author: Neville Otieno */
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the nth node of the list, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL && i != index)
	{
		return (NULL);
	}

	return (current);
}
