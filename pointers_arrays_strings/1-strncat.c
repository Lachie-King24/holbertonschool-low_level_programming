#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to transfer
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
