#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	if (str == NULL)
		return;

	int start_index;
	int i;

	length = strlen(str);

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
