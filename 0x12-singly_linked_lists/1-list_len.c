#include <stddef.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
