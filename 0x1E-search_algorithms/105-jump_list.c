#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a specified value within a sorted list of integers.
 *
 * @list: Pointer to the head of the sorted list.
 * @size: Number of nodes in the list.
 * @value: The value being searched for.
 *
 * Return: Pointer to the first node containing the value if found,
 * otherwise NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size, counter;
	listint_t *current, *previous;

	if (!list || size == 0)
		return (NULL);

	jump_size = sqrt(size);
	current = list;

	while (current->n < value && current->next)
	{
		previous = current;
		counter = 0;
		while (current->next && counter < jump_size)
		{
			current = current->next;
			counter++;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", previous->index,
	       current->index);

	current = previous;
	while (current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->next)
			current = current->next;
		else
			return (NULL);
	}
	if (current->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		return (current);
	}

	return (NULL);
}
