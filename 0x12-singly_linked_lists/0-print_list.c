#include "lists.h"
#include <stdio.h>

/**** Author: Neville Otieno ****/
/**
 * print_list - Prints all the elements of a linked list.
 * @h: The head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count;
	const list_t *current;

	node_count = 0;

	if (h == NULL)
		return (0);

	current = h;

	do {
		if (current->str == NULL)
		{
			printf("[%d] %s\n", current->len, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		node_count++;
		current = current->next;
	} while (current != NULL);

	return (node_count);
}
