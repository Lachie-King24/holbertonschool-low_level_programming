#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: number to be checker
 * Return: Pos = 1 print +. Neg = -1 print -. Zero (0)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
