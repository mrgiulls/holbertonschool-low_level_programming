#include "holberton.h"
/**
 * print_numbers - function that print the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
int c;
for (c = 0; c < 10; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}
