#include "holberton.h"
/**
* print_alphabet_x10 - entry point
*
* Description: Prints the alphabet with _putchar and also line
*
* Return: void
*/
void print_alphabet_x10(void)
{
char j;
char c;
for (j = 0; j < 10; j++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
