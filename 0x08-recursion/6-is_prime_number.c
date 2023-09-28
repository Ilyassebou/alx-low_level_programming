#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: Number to evaluate.
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (my_prime_number(n, n - 1));
}

/**
 * my_prime_number - Function calculates if a number is prime recursively.
 * @n: Number to evaluate.
 * @d: The current divisor to check n against.
 * Return: 1 if n is prime, 0 otherwise.
 */

int my_prime_number(int n, int d)
{
	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	return (my_prime_number(n, d - 1));
}
