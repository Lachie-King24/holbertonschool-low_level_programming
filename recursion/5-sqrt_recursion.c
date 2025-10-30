#include "main.h"

/**
 * workOut - calculates multiples of x
 * _sqrt_recursion - match the value of x to square root of 9
 * @n: number entered
 * @x: square root of number
 * Return: square root of n
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
