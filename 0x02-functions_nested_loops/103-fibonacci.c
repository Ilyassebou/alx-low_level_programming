#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms
 *        in the Fibonacci sequence less than 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, sum = 0;

	while (fib2 < 4000000)
	{
		if (fib2 % 2 == 0)
			sum += fib2;
		unsigned long int next = fib1 + fib2;

		fib1 = fib2;
		fib2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
