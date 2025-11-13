#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, seperated by separator
 * @separator: separates numbers
 * @n: number of arg
 * Return: Void/Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
