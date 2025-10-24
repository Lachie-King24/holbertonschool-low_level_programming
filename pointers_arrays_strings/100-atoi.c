#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an int
 * @s: string to convert
 * Return: integer found in string
 */

int _atoi(char *s)
{
    int i, num = 0;
    int negative = 0;
    int found_digit = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-' && !found_digit)
        {
            negative = !negative;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else
        {
            if (found_digit)
                break;
        }
    }

    if (negative)
        num = -num;

    return num;
}
