#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string.
 * NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i, l = 0;

	if (str == (NULL))
		return (NULL);

	while (str[l])
		l++;

	d = malloc((l + 1) * sizeof(char));

	if (d == (NULL))
		return (NULL);

	for (i = 0; i <= l; i++)
		d[i] = str[i];

	return (d);
}
