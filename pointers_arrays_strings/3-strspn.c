#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: substring
 * Return: Unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;
	unsigned int hold = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		hold = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		if (hold == count)
		{
			return (count);
		}
	}
	return (count);
}
