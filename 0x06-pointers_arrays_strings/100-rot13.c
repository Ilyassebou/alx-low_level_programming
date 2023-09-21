#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: *str
 */

char *rot13(char *str)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;
	char c;

	for (i = 0; str[i]; i++)
		c = str[i];

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		char *alphabet = (c >= 'a' && c <= 'z') ? lowercase : uppercase;
		char offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		for (j = 0; j < 26; j++)
		{
			if (c == alphabet[j])
			{
				str[i] = alphabet[(j + 13) % 26] + (c - offset);
				break;
			}
		}
	}

	return (str);
}
