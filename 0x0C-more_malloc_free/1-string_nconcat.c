#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string.
 * @s1: The string to append to.
 * @s2: The string to concatenate from.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: A pointer to the resulting string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *s, *concat;

	if (s1)
	{
		while (s1[len1])
			len1++;
	}

	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));
	if (!s)
		return (NULL);

	concat = s;
	while (len1--)
		*s++ = *s1++;

	while (n--)
		*s++ = *s2++;

	*s = '\0';

	return (concat);
}
