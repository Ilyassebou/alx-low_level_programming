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
	size_t count = 0;
	listint_t *temp = *h;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
		count++;

		if (next >= *h)
		{
			*h = NULL;

			return (count);
		}
	}

	*h = NULL;

	return (count);
}
