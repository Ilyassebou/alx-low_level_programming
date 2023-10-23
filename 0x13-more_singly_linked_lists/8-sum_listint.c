#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Computes the sum of all data values
 * in a listint_t linked list.
 *
 * @head: A pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all data values.
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
