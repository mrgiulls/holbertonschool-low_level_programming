#include <stdio.h>
#include<stdlib.h>

/**
 * array_range - The array created contains all the values
 * from min (included) to max (included), ordered from min to max
 * @min: min value of the array
 * @max: max value of the array
 * Return: array
 */

int *array_range(int min, int max)
{
	int i;
	int *ar;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		*(ar + i) = min + i;
	}
	return (ar);
}
