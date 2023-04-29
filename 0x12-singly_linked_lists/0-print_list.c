#include "lists.h"
#include <stdio.h>

/*** Author: Neville Otieno ***/
/**
 * print_list - Prints all the elements of a linked list.
 * @h: The head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node_count++;
		current = current->next;
	}

	return (node_count);
}
