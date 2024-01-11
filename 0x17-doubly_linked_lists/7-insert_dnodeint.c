#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node into a
 * dlistint_t list at the specified index.
 *
 * @h: Double pointer to the head of the list.
 * @idx: Index at which the new node should be added, starting from 0.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if the insertion failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (count = 0; current != NULL; count++, current = current->next)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->prev = current;
			new_node->next = current->next;

			if (current->next != NULL)
				current->next->prev = new_node;

			current->next = new_node;

			return (new_node);
		}
	}

	return (NULL);
}
