#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The input string.
 *
 * Returns: The number of words in the string.
 */

int count_words(const char *str)
{
	int c = 0;
	int w = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			w = 0;
		}
		else if (!w)
		{
			c++;
			w = 1;
		}
	}

	return (c);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Returns: An array of strings containing the words.
 */

char **strtow(const char *str)
{
	int n_words;
	int word_l = 0;
	int word_s = 0;
	int result_i = 0;
	int i;
	int j;
	char **result;
	char *word;

	if (str == NULL)
		return (NULL);

	n_words = count_words(str);

	if (n_words == 0)
		return (NULL);

	result = (char **)malloc((n_words + 1) * sizeof(char *));

	if (result == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (word_l > 0)
			{
				word = (char *)malloc((word_l + 1) * sizeof(char));

				if (word == NULL)
					return (NULL);

				for (j = 0; j < word_l; j++)
				{
					word[j] = str[word_s + j];
				}
				word[word_l] = '\0';

				result[result_i] = word;
				result_i++;
				word_l = 0;
			}
		}
		else if (word_l == 0)
		{
			word_s = i;
			word_l = 1;
		}
		else
		{
			word_l++;
		}
	}

	if (word_l > 0)
	{
		word = (char *)malloc((word_l + 1) * sizeof(char));

		if (word == NULL)
			return (NULL);
		for (j = 0; j < word_l; j++)
		{
			word[j] = str[word_s + j];
		}
		word[word_l] = '\0';

		result[result_i] = word;
		result_i++;
	}

	result[result_i] = NULL;

	return (result);
}
