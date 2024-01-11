#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Deallocates memory used by a dlistint_t list.
 * @head: Pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
