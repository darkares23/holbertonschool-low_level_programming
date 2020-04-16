#include "search_algos.h"
/**
 * binary_search - Binary search function
 * @array: list to serach target
 * @size: siza of array
 * @value: target to be found
 * Return: value ondex in the list
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i = 0, mid = 0;

	if (!array)
		return (-1);

	while (low <= high)
	{
		i = low;
		printf("Searching in array: ");
		while (i <= high)
		{
			if (i != high)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
			i++;
		}
		mid = (low + high) / 2;
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
