#include "main.h"

/**
 * print_to_98 - print numbers. n-98
 * @n: num to count from
 */

void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i < 0)
{
_putchar('-');
if (-i >= 10)
{
_putchar((-i / 10) + '0');
}
_putchar((-i % 10) + '0');
}
else
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i >= 10)
{
_putchar((i / 100) + '0');
_putchar(((i / 10) % 10) + '0');
_putchar((i % 10) + '0');
}
else if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
