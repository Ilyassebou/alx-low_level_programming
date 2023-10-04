#include <stdlib.h>
#include "main.h"

/**
 * countWords - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */

int countWords(char *str)
{
	int wordFlag, charCount, wordCount;

	wordFlag = 0;
	wordCount = 0;
	for (charCount = 0; str[charCount] != '\0'; charCount++)
	{
		if (str[charCount] == ' ')
			wordFlag = 0;
		else if (wordFlag == 0)
		{
			wordFlag = 1;
			wordCount++;
		}
	}

	return (wordCount);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tempStr;
	int i, index = 0, len = 0, wordCount, charCount = 0, start, end;

	while (*(str + len))
		len++;
	wordCount = countWords(str);
	if (wordCount == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (wordCount + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (charCount)
			{
				end = i;
				tempStr = (char *)malloc(sizeof(char) * (charCount + 1));
				if (tempStr == NULL)
					return (NULL);
				while (start < end)
					*tempStr++ = str[start++];
				*tempStr = '\0';
				matrix[index] = tempStr - charCount;
				index++;
				charCount = 0;
			}
		}
		else if (charCount++ == 0)
			start = i;
	}

	matrix[index] = NULL;

	return (matrix);
}
