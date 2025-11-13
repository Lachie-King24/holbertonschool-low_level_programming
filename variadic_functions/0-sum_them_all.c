#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: constant unchangable int
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int total;

	total = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		total += va_arg(ap, const unsigned int);

	va_end(ap);
	return (total);
}
