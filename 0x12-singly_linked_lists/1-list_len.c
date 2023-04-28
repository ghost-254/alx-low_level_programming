#include "lists.h"

/* Author: Neville Otieno */
/**
 * list_len - Computes the number of elements present...
 * ... in a given singly-linked list.
 *
 * @h: The singly-linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	/* Traverse the list and count the elements */
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
