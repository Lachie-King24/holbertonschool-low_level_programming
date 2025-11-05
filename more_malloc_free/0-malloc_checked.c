#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memory to asign
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}

	return (check);
}
