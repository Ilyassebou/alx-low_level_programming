#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a given index.
 *
 * @head: Pointer to a pointer to the first element of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	if (current->next == NULL)
		return (-1);

	temp = current->next;

	current->next = temp->next;
	free(temp);

	return (1);
}
