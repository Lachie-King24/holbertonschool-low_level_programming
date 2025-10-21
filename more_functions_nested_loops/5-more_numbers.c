#include "main.h"

/**
 * more_numbers - print 0-14. 10x
 *
 * Return: result of function
 */

void more_numbers(void)
{
int a, b;
for (b = '0'; b <= '9'; b++)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
{
_putchar('0' + a / 10); // tens place
}
_putchar('0' + a % 10); // ones place
}
_putchar('\n');
}
}
