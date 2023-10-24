#include "lists.h"

/**
 * find_listint_loop - Detects and returns the starting node
 * of a loop in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop begins,
 * or NULL if no loop is found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head;
	listint_t *h = head;

	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}

			return (t);
		}
	}

	return (NULL);
}
