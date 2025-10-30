#include "main.h"

/**
 * help_me - return 0 if prime. 1 if not
 * @n: number to check
 * @i: recursion number
 * Return: 0 if true, 1 if false
 */

int help_me(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (help_me(n, i + 1));
}

/**
 * is_prime_number - return 1 if prime. 0 if not
 * @n: number to check
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (help_me(n, 2));
}
