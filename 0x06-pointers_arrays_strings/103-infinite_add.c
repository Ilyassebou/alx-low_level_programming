#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result or 0 if it can't be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 > size_r || len2 > size_r || len1 == 0 || len2 == 0)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	r[size_r] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}

	return (r + size_r);
}
