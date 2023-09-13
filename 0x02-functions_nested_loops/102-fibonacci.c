#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib[50];
	int count;

	fib[0] = 1;
	fib[1] = 2;
	for (count = 2; count < 50; count++)
	{
		fib[count] = fib[count - 1] + fib[count - 2];
	}
	for (count = 0; count < 50; count++)
	{
		printf("%lu", fib[count]);
		if (count != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
