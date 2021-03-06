#include "holberton.h"
/**
 * _strlen - returns length of str s
 * @s: string to be measured
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
{
count++;
}
return (count);
}

/**
 * _strcat - Concatanates dest and src
 * @dest: One of the strings in question
 * @src: One of the strings in question
 *
 * Return: the concatanated string
 */
char *_strcat(char *dest, char *src)
{
int len, i;
len = _strlen(dest);
for (i = 0 ; *(src + i) != '\0' ; i++)
{
*(dest + (len + i)) = *(src + i);
}
return (dest);
}
