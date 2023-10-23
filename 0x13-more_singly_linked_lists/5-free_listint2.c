#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Deallocates a listint_t list and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the first element in the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}
