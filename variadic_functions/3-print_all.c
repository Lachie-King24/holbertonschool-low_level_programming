#include "variadic_functions.h"

/**
 * 
 *
 *
 */

void print_a_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_an_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_a_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_a_string(va_list args)
{
	char *s = va_arg(args, char *);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int j;
	char *sep = "";
	form_t ops[] = {
		{"c", print_a_char},
		{"i", print_an_int},
		{"f", print_a_float},
		{"s", print_a_string},
		{NULL, NULL}
	};

	i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].symbol != NULL)
		{
			if (format[i] == ops[j].symbol[0])
			{
				printf("%s", sep);
				ops[j].print(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
