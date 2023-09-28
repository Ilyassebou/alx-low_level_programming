#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to reverse.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (my_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen - Return the length of a string.
 * @s: The string for which to calculate the length.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * my_palindrome - Function to check characters recursively for palindrome.
 * @s: The string to be checked.
 * @str: The starting index.
 * @e: length of the string
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */

int my_palindrome(char *s, int str, int e)
{
	if (str >= e)
		return (1);

	if (*(s + str) != *(s + e - 1))
		return (0);

	return (my_palindrome(s, str + 1, e - 1));
}
