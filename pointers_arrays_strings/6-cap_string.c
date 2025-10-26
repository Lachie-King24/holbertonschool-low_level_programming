#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else
			{
				for (j = 0; sep[j] != '\0'; j++)
				{
					if (s[i - 1] == sep[j])
					{
						s[i] = s[i] - 32;
						break;
					}
				}
			}
		}
		i++;
	}

	return s;
}
