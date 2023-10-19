#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a singly linked list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		c++;
	}

	return (c);
}
