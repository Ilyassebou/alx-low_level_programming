#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}

		s++;
	}

	return (count);
}
