#include "main.h"

/**
 * _islower - Checks for Lowercase character
 * c - is the entered character to check
 * Return: Is 1 if lower, otherwise 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
