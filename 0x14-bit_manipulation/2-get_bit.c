#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index.
 *
 * @n: The number in which to examine the bits.
 * @index: The position of the bit to be retrieved (0-based index).
 *
 * Return: The value of the bit at the specified index
 * or -1 if an error occurs.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
