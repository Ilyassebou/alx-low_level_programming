#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int amountInCents, i, coinCount;
	int coinValues[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amountInCents = atoi(argv[1]);
	coinCount = 0;

	if (amountInCents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amountInCents >= 0; i++)
	{
		while (amountInCents >= coinValues[i])
		{
			coinCount++;
			amountInCents -= coinValues[i];
		}
	}

	printf("%d\n", coinCount);
	return (0);
}
