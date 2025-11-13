#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - runs files
 * @argc: argument count
 * @argv: argument array
 * Return: errors or completion
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op(num1, num2));
	return (0);
}
