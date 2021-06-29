#include "holberton.h"
/**
 * swap_int - Swap the values of two integers
 *@a: pointer firts
 *@b: pointer second
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
