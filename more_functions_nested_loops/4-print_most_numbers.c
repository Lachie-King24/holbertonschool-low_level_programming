#include "main.h"

/**
 * print_most_numbers print 0-9, followed by new line, no num 2|4
 *
 * Return: Result of function
 */

void print_most_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
if (a == '4' || a == '2')
{
}
else
{
_putchar(a);
}
_putchar('\n');
}
