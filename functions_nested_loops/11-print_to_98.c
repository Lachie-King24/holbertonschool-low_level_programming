#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
int i;
for (i = n; i != 98; i += (n < 98 ? 1 : -1))
{
if (i < 0)
{
_putchar('-');
if (-i >= 10)
_putchar((-i / 10) + '0');
_putchar((-i % 10) + '0');
}
else if (i >= 100)
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
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
