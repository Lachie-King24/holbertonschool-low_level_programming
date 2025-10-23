#include "main.h"

/**
 * putchars - sets number of characters
 *
 * @n: number of characters
 * @c: character to write
 */

void putchars(int n, char c)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(c);
	}
}

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		putchars(size - i, ' ');
		putchars(i, '#');
		_putchar('\n');
	}
}
