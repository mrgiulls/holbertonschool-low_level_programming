#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to get the length of
 * Return: Length of string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
