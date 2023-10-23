#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Prepends a new node to a linked list.
 * @head: A pointer to the first node in the list.
 * @n: The data to be inserted into the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
