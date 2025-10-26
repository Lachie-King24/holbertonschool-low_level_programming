#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
  int i = 0;
  int a = 0;
  int num = 0;
  int num2 = 0;
	while (s1[i] != '\0')
	{
		num = num + s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		num2 = num2 + s2[a];
		a++;
	}
	total = num - num2;
	return (total);
}
