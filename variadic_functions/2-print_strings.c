#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator of strings
 * @n: number of arg
 * Return: Void/Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
