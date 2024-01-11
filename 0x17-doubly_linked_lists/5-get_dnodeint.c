#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified position
 * in a dlistint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Position of the node, starting from 0.
 *
 * Return: Pointer to the node at the specified position, or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
