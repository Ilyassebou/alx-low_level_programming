#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins needed to make
 * change for a given amount of money in cents.
 *
 * @argc : The number of command-line arguments.
 * @argv : An array of strings containing the command-line arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */

int main(int argc, char *argv[])
{
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);
	int coinCount = 0;
	int amountInCents = atoi(argv[1]);
	int i;

	if (amountInCents < 0)
	{
		printf("0\n");
		return (0);
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < numCoins; i++)
	{
		while (amountInCents >= coinValues[i])
		{
			amountInCents -= coinValues[i];
			coinCount++;
		}
	}

	printf("%d\n", coinCount);
	return (0);
}
