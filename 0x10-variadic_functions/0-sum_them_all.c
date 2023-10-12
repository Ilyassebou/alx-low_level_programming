#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: The number of arguments to be summed.
 * @...: Variable number of parameters to calculate the sum of.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}

	va_end(ar);

	return (sum);
}

