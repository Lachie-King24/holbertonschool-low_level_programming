#include "main.h"

/**
 * puts2 - print 2nd char of string
 * @str: string
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	i++;
	}
	_putchar('\n');
}
