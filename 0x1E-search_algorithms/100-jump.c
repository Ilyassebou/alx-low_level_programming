#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Performs a search for a specific value within
 * an integer array.
 *
 * @array: Pointer to the first element of the array to be searched.
 * @size: Number of elements in the array.
 * @value: The value being searched for.
 *
 * Return: The index of the value if found,
 * or -1 if the value is not found or the array is empty.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, jump, end = 0;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += jump;
	}

	start = end - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	end = end >= size ? size - 1 : end;

	while  (start <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return ((int)start);
		start++;
	}

	return (-1);
}
