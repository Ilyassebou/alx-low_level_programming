#include <stdio.h>

/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: str value
 */

char *leet(char *str)
{
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "44370171";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_map[j]; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}

	return (str);
}
