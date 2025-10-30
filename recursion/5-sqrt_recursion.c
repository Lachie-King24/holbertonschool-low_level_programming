#include "main.h"

/**
 * workOut - calculates multiples of x
 * @n: number to check
 * @x: number to use recursion on
 * Return: x or fail
 */

int workOut(int n, int x)
{
	if (x * x == n)
	{
	return (x);
	}
	if (x * x > n)
	{
	return (-1);
	}
	return (workOut(n, x + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number to check
 * Return: n or fail
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
	return (workOut(n, 1));
}
