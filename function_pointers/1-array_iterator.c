#include "function_pointers.h"

/**
 * array_iterator - executes a function within an array
 * @array: array to use
 * @size: size of array
 * @action: function within the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
