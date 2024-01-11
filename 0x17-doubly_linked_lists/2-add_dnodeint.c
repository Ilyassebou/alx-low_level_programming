#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Inserts a new node with the given value
 * at the start of a dlistint_t list.
 *
 * @head: Double pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the newly inserted node, or NULL if allocation fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
