#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * looped_listint_len - Determines the count of distinct nodes
 * in a looped listint_t linked list.
 *
 * @head:  pointer to the listint_t's head to examine.
 *
 * Return: 0 if the list is not looped,
 * or the number of unique nodes in the list.
 *
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;

			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Safely prints a list of listint_t nodes.
 * @head: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	size_t index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
