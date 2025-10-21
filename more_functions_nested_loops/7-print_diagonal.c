#include "main.h"

/**
 * print_diagonal - draws a line diagonally
 *
 * @n - number of lines
 */

void print_diagonal(int n)
{
int d;
if (n <= 0)
{
_putchar('\n');
}
for (d = 0; d < n; d++)
{
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
