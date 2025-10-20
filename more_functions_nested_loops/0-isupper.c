#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 1 if upper, 0 otherwise
 *
 * _isupper: if upper, return 1. otherwise 0
 *
 * @c: character to be investigated. return will be an int
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
