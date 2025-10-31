#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if 2 digits entered. otherwise 1.
 */

int main(int argc, char *argv[])
{
	int num;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num * num2;
	printf("%d\n", result);
	return (0);
}
