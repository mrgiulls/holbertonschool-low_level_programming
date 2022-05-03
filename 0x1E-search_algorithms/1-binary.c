#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search -  searches for a value in a sorted array of integers
* @array:  is a pointer to the first element of the array
* @size: is the number of elements in array
* @objetivo: is the value to search for
* Return: return value or -1
*/

int binary_search(int *array, size_t size, int objetivo)
{
size_t left = 0, i;
size_t right = size - 1, mit;
if (array == NULL || size == 0)
return (-1);
while (left <= right)
{
printf("Searching in array: ");
for (i = 0; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
mit = (left + right) / 2;
if (objetivo == array[mit])
return (mit);
if (objetivo < array[mit])
{
right = mit - 1;
}
else
{
left = mit + 1;
}
}
return (-1);
}