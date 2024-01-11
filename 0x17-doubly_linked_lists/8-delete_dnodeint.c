#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Removes the node at the specified index
 * in a dlistint_t linked list.
 *
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to be removed.
 *
 * Return: 1 if successful, -1 if the removal failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next_node;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (count = 0; current != NULL; count++, current = current->next)
	{
		if (count == index - 1)
		{
			if (current->next == NULL)
				return (-1);

			next_node = current->next->next;
			free(current->next);
			current->next = next_node;

			if (next_node != NULL)
				next_node->prev = current;

			return (1);
		}
	}

	return (-1);
}
