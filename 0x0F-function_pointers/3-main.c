#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry result for a simple calculator program.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: 0 on success, other values on error (as specified in the requirements).
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
