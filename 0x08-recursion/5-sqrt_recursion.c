#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * Return: The resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (my_sqrt_recursion(n, 0));
}

/**
 * my_sqrt_recursion - Function to find the square root recursively.
 * @n: The number for which to calculate the square root.
 * @a: The current a for the square root.
 * Return: The resulting square root.
 */

int my_sqrt_recursion(int n, int a)
{
	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (my_sqrt_recursion(n, a + 1));
}
