#include <stdio.h>

/**
 * main - Generates and prints the Fibonacci sequence.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, temp;
	unsigned long int limit = 1000000000;

	printf("%lu", fib1);
	while (fib2 < limit)
	{
		printf(", %lu", fib2);
		temp = fib2;
		fib2 += fib1;
		fib1 = temp;
	}
	printf("\n");
	return (0);
}
