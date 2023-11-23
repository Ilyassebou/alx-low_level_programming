#include "main.h"

/**
 * get_endianness - Determines the system's byte order (endianness).
 *
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
	int value_test;
	char *ptr_byte;

	value_test = 1;
	ptr_byte = (char *)&value_test;

	return (*ptr_byte);
}
