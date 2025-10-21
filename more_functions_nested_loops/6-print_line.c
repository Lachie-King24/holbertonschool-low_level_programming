#include "main.h"

/**
 * print_line - draws a line
 *
 * @n: number of _'s to print
 *
 * @u: underline
 *
 * Return: Nothing
 */

void print_line(int n)
{
int u;
if (n <= 0)
{
_putchar('\n');
return;
}
for (u = 0; u < n; u++)
{
_putchar('_');
}
_putchar('\n');
}
