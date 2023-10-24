#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list
 * and returns the number of elements.
 *
 * @h: A pointer to the first node in the linked list.
 *
 * Return: The count of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	 size_t len = 0;
	 listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		 current = *h;
		 *h = current->next;
		 free(current);
		 len++;

		if (current->next >= current)
			break;
	}

	 *h = NULL;

	return (len);
}
