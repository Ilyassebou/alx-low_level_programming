#include "main.h"

/**
 * _puts_recursion - function like puts(); Prints a string using recursion.
 * @s: The string to be printed.
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
