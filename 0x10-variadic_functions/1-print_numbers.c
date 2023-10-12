#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers with a separator and a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of integer to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int num;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ar, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ar);
}
