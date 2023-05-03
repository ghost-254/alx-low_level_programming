#include <stdlib.h>
#include <string.h>
#include "lists.h"

/* Author: Neville Otieno */
/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data (n) of the list, or 0 if it is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
