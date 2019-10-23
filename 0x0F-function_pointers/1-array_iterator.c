#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function to print a name
 * @array: name to print
 * @size: size of array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
}
