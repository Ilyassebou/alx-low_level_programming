#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Inserts a node at the end of a linked list.
 * @head: A pointer to the first element in the list.
 * @n: The data to be placed in the new element.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *current_node = *head;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_element;

	return (new_element);
}
