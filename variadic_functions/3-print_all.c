#include "variadic_functions.h"

/**
 * 
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int j;
	const char arg[] = "cifs";

	i = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (arg[j])
		{
			if (format[i] == arg[j])
				printf(" ")
		}


	}
}
