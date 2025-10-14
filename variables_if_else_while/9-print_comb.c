#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
int i, j;
for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar((i != 8 || j != 9) ? ',' : '\n');
putchar((i != 8 || j != 9) ? ' ' : 0);
}
}
return 0;
}
