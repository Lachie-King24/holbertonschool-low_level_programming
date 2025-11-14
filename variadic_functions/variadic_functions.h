#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(va_list args);
void print_an_int(va_list args);
void print_a_float(va_list args);
void print_a_string(va_list args);

struct format
{
	char *symbol;
	void (*print)(va_list);
};

typedef struct format form_t;

#endif
