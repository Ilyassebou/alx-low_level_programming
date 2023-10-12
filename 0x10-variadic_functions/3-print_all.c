#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print values of different data types based on the format string.
 * @format: List of types of arguments passed to the function.
 * @...: Variable number of arguments matching the format.
 */

void print_all(const char * const format, ...)
{
	va_list ar;
	char *separator = "", *str;
	unsigned int i = 0;

	va_start(ar, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ar, double));
				break;
			case 's':
				{
					str = va_arg(ar, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
				}
				break;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(ar);
}
