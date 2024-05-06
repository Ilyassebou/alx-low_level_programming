#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array to print
 * @l: the left index
 * @r: the right index
 */
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for an element in an array
 * @array: the array we want to search in
 * @size: size of the array
 * @value: the target value
 * Return: the index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = l + (r - l) / 2;

		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a specified value within
 * an array of integers using the exponential search algorithm.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @value: The value being searched in the array.
 *
 * Return: The index of the first occurrence of 'value' in the array,
 *         or -1 if 'value' is not present or the array is empty.
 */
int exponential_search(int *array, size_t size, int value)
{
	int result_index, previous_index;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	for (result_index = 1; result_index <= (int) size; result_index *= 2)
	{
		if (value <= array[result_index])
			break;
		previous_index = result_index;
		printf("Value checked array[%d] = [%d]\n",
				result_index, array[result_index]);
	}

	if (result_index >= (int) size)
		result_index = (int) size - 1;

	printf("Value found between indexes [%d] and [%d]\n",
			previous_index, result_index);

	result_index = binary_search(array + previous_index,
			result_index - previous_index + 1, value);

	if (result_index < (int) size && result_index >= 0)
		return (result_index + previous_index);
	else
		return (-1);
}
