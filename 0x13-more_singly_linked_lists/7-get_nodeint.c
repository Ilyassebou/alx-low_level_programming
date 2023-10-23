#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a specific node from a
 * linked list based on its index.
 *
 * @head: A pointer to the first node in the linked list.
 * @index: The index of the node to be retrieved.
 *
 * Return: A pointer to the desired node, or NULL if it doesn't exist.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head != NULL)
	{
		if (position == index)
			return (head);
		head = head->next;
		position++;
	}

	return (NULL);
}
