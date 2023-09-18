#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[12];
	int sum = 0;
	int i;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[i] = 126 - (sum % 94);
	password[12] = '\0';

	printf("%s\n", password);

	return (0);
}
