#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char temp s[0];

	if (s == NULL)
		return;
	while (s [length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
