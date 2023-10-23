#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node
 * to a linked list at a specified position.
 *
 * @head: A pointer to the first node in the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data to be placed in the new node.
 *
 * Return: A pointer to the new node, or NULL if insertion fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	free(new);

	return (NULL);
}
