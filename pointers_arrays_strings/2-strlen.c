#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}
