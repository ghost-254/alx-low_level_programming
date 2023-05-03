#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/* Author: Neville Otieno */
/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *temp;

	if (!head)
		exit(98);

	curr = head;

	while (curr)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		temp = curr;
		curr = curr->next;
		if (temp <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
	}

	return (count);
}
