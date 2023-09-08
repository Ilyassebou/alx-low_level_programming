#include <stdio.h>

/**
 * main - Prints the alphabet lowercase and uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}


