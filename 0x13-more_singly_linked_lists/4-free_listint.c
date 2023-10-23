#include "lists.h"

/**
 * free_listint - Deallocates memory used by a linked list.
 * @head: A listint_t list to be released.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
