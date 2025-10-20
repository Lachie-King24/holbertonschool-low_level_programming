#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
