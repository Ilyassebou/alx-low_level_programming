#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: the starting value (included)
 * @max: the ending value (included)
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a, s, i;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		a[i] = min++;
	}

	return (a);
}
