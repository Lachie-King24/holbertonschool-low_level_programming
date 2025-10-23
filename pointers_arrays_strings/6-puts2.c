#include "main.h"

/**
 * length - finds length of string
 * @str: string
 * Return: length of string
 */

int length(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts2 - print 2nd char of string
 * @str: string
 */

void puts2(char *str)
{
	int i;
	int len = length(str);

	i = 0;

	while (i < len)
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}
