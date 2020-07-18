#include "search_algos.h"
/**
 * linear_search - Linear search function
 * @array: list to serach target
 * @size: siza of array
 * @value: target to be found
 * Return: value index in the list
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
