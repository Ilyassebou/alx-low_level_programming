#include "main.h"

/**
 * set_bit - Modifies a specific bit at a given index to 1.
 *
 * @n: A pointer to the number to be modified.
 * @index: The index where the bit will be set (0-based index).
 *
 * Return: 1 upon success, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bitset = 1 << index;
	*n = *n | bitset;

	return (1);
}

