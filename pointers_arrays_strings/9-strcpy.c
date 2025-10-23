#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @src: original source
 * @dest: requested dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	  dest[i] = src[i];

	dest[i] = '0';
	return (dest);
}
