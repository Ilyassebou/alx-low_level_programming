#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
