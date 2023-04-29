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
    list_t *new_node;

    if (head == NULL || str == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        list_t *current_node = *head;

        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }

        current_node->next = new_node;
    }

    return (new_node);
}
