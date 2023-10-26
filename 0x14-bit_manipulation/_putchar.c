#include <unistd.h>

/**
 * _putchar - Outputs a character to the standard output stream.
 *
 * @c: The character to be printed.
 *
 * Return: 1 on success. On error,
 * -1 is returned, and errno is set accordingly.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

