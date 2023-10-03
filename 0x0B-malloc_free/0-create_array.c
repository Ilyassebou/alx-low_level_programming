#include <stdlib.h>

/**
 * create_array - Create an array of characters
 * and initialize it with a specific character.
 *
 * @size: The size of the array to create.
 * @c: The character used for initialization.
 *
 * Return: A pointer to the newly allocated array, or NULL if allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
