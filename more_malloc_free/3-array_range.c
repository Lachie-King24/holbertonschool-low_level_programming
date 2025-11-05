#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: max int
 * Return: pointer to int
 */

int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		range[i] = min + i;
	}

return (range);
}
