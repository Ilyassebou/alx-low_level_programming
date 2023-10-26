#include "main.h"

/**
 * print_binary - Outputs the binary representation of a number.
 * @n: The number to print in binary format
 */

void print_binary(unsigned long int n)
{
	int shift = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || shift == 0)
		{
			_putchar('0');
		}
		shift--;
	}
}
