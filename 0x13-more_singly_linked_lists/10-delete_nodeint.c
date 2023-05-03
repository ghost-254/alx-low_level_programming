#include <stdlib.h>
#include <string.h>
#include "lists.h"

/* Author: Neville Otieno */
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
