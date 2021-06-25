#include "holberton.h"
/**
 *print_most_numbers - the numbers, from 0 to 9 without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
int c = 48;
while (c <= 57)
{
if (c != 50 && c != 52)
{
_putchar(c);
}
c++;
}
_putchar('\n');
}
