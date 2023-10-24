#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in-place.
 * @head: A pointer to the first node in the list.
 *
 * Return: A pointer to the new first node after reversing the list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (prev);
}
