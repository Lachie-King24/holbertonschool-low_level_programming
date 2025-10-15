#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: number to check
 * last_digit - finds last digit
 * Return: Last digit. always pos
 */

int print_last_digit(int r)
{
int last_digit;
last_digit = r % 10;
if (last_digit < 0)
{
_putchar(last_digit + '0');
return (-last_digit);
}
else
{
_putchar(last_digit + '0');
return (last_digit);
}
}
