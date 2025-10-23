#include "main.h"

/**
 * reset_to_98 - take pointer to int, update to 98
 * @*n: pointer to n
 */

void reset_to_98(int *n)
{
	int *ptr = &*n;
	*ptr = 98;
}
