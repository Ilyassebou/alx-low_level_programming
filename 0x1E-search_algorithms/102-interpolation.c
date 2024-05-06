#include "search_algos.h"

/**
 * interpolation_search - Finds the position of a value within a sorted array
 *                        using interpolation search.
 *
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of 'value' in the array,
 *         or -1 if 'value' is not present or the array is empty.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index = 0, lower_bound = 0, upper_bound = size - 1;

	if (array)
	{
		while ((value >= array[lower_bound]))
		{
			index = lower_bound + (((double)(upper_bound - lower_bound) /
				(array[upper_bound] - array[lower_bound])) * (value - array[lower_bound]));

			if (index > size)
			{
				printf("Value checked array[%lu] is out of range\n", index);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", index, array[index]);

			if (array[index] < value)
				lower_bound = index + 1;
			else if (array[index] > value)
				upper_bound = index - 1;
			else
				return (index);
		}
	}

	return (-1);
}
