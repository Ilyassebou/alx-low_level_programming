#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *head)
{
    size_t count = 0;

    while (head != NULL)
    {
        head = head->next;
        count++;
    }

    return count;
}
