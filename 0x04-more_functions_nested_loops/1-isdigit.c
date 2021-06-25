#include "holberton.h"
/**
*_isdigit function tht checks for a digit (0 through 9)
* @c: variable tpe int
* Return: 1 is a c or 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
