#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *cnctd;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 == (NULL))
		s1 = "";
	if (s2 == (NULL))
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	cnctd = malloc((l1 + l2 + 1) * sizeof(char));

	if (cnctd == (NULL))
		return (NULL);

	for (i = 0; i < l1; i++)
		cnctd[i] = s1[i];

	for (j = 0; j < l2; j++)
		cnctd[i + j] = s2[j];

	cnctd[i + j] = '\0';

	return (cnctd);
}
