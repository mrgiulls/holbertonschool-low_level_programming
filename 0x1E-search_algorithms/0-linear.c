#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: is a pointer to the first element
 * @size: is the number of elements in array
 * @objetivo: is the value to search
 * Return: return value or -1
 */


int linear_search(int *array, size_t size, int objetivo)
{
int i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == objetivo)
{
return (i);
}
}
return (-1);
}
