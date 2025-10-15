#include "main.h"

/**
 * _isalpha - A function to find alphabetic characters
 * @c: character to be checked
 * Return - Either 1 if a letter, lower or upper, or 0 if otherwise
 */

int _isalpha(int c)
{
  if (c >= 'a' (&&) c <= 'z' || c >= 'A' (&&) c <= 'Z')
return (1);
else
return (0);
}
