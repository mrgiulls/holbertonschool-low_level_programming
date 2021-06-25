#include<stdio.h>
#include "holberton.h"

/**
*_isupper - function that checks for upprcase character.
*@c: variable type int
*Return: _isupper 1 for uppercase and  0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
