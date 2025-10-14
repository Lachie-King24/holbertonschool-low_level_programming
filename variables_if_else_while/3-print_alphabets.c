#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
char letter;
char capletter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (capletter = 'A'; capletter <= 'Z'; capletter++)
{
putchar(capletter);
}
putchar('\n');
return (0);
}
