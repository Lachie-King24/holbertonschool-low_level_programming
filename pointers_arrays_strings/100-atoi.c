#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an int
 * @s: string to convert
 * Return: integer found in string
 */

int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int negative = 0;
	int found_digit = 0;
	int digit;

	while (s[i] != '\0')
	{
	if (s[i] == '-' && !found_digit)
	{
		negative = !negative;
	}
	else if (s[i] == '+' && !found_digit)
	{
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
	digit = s[i] - '0';

		if (!negative && num > (INT_MAX - digit) / 10)
		return (INT_MAX);
		if (negative && num > (INT_MAX - digit) / 10)
		return (INT_MIN);

		num = num * 10 + digit;
		found_digit = 1;
		}
	else if (found_digit)
	{
		break;
	}

	i++;
	}

	if (negative)
	num = -num;

	return (num);
}
