#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
  int i, num;
for (i = n; i != 98; i += (n < 98 ? 1 : -1))
{
num = i;
if (num < 0)
{
_putchar('-');
 num = -num;
}
if (num >= 100)
{
_putchar((num / 100) + '0');
 _putchar(((num / 10) % 10) + '0');
_putchar((num % 10) + '0');
}
else if (num >= 10)
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
else
_putchar(num + '0');
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
