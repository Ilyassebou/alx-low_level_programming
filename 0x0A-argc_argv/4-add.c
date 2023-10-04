#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * check_num - check - string there are digit
 *
 * @str: input string
 *
 * Return: 1 if all characters in the string are digits, 0 otherwise
 */

int check_num(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
