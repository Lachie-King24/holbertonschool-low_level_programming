#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
