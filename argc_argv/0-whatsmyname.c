#include "main.h"
#include <stdio.h>

/**
 * main - prints name of the file
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 
 */

int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
