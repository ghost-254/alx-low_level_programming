#include <stdlib.h>
#include <string.h>
#include "lists.h"

/* Author: Neville Otieno */
/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to a pointer to the first element of the list
 *
 * Return: Pointer to the first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
