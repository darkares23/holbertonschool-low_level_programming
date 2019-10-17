#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - entry point
 * @min: int variable
 * @max: int variable
 * Return: int variable
*/

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; min != max; i++)
	{
		array[i] = min;
		min++;
	}
	array[i] = max;
	return (array);
}
