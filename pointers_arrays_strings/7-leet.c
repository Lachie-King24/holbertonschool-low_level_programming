#include "main.h"

/**
 * leet - encodes a string into leet
 * @s: string to translate
 */

char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aZeEoOtTlL";
	char nums[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
