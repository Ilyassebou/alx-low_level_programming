#include "main.h"

/**
 * clear_bit - Changes the value of a specific bit at a given index to 0.
 *
 * @n: A pointer to the number to be modified.
 * @index: The index where the bit will be cleared (0-based index).
 *
 * Return: 1 upon success, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1 << index));

	return (1);
}

