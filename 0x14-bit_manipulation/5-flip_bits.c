#include "main.h"

/**
 * flip_bits - Determines the count of bits that need to be flipped
 * to transform one number into another.
 *
 * @n: The initial number.
 * @m: The target number.
 *
 * Return: The count of bits to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differing_bits = n ^ m;
	unsigned int c = 0;

	while (differing_bits)
	{
		c += differing_bits & 1;
		differing_bits >>= 1;
	}

	return (c);
}

