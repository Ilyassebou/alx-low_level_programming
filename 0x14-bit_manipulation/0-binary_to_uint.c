#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * @b: A pointer to a string representing a binary number.
 *
 * Return: The decimal value of the binary number as an unsigned integer
 * , or 0 in case of an error.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			r <<= 1;
		}
		else if (b[i] == '1')
		{
			r <<= 1;
			r |= 1;
		}
		else
		{
			return (0);
		}
	}

	return (r);
}
