#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if fine, 1 if error
 */

int main(int argc, char *argv[])
{
	int result;
	int i;
	int j;

	result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
