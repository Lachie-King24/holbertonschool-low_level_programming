#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
  int num1, num2, multiply, tens, ones;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
multiply = num1 * num2;
 tens = multiply / 10;
 ones = multiply % 10;
 if (num2 != 0)
   {
   _putchar(',');
 _putchar(' ');
 }
 if (multiply >= 10)
   {
     _putchar(tens + '0');
   }
 else if (num2 != 0)
_putchar(' ');
 _putchar(ones + '0');
}
 _putchar('\n');
}
}
