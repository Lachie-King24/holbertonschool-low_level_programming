#include "main.h"

/**
 * _strcat - function to concatentate two strings
 * @dest: string one
 * @src: second string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int a;
	
	i = 0;
	a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
