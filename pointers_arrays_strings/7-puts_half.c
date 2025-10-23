#include "main.h"

/**
 * length - find length of string
 * @str: string
 * Return: Length of string
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
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len;

	len = length(str);

		len = len / 2;
		while (str[len] != '\0')
		{
		  _putchar(str[len]);
		len++;
		}
		_putchar('\n');
}
