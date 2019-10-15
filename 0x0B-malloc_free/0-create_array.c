#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*create_array - Function to create an array
*@size: number of positions
*@c: characters to the array
*Return: created array or null
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size > 0)
		array = malloc(size * sizeof(char));
	else if (size == 0)
	       return (NULL);
	if (array == NULL)
	       return(NULL);

	i = 0;

	while (i < size)
	{
	      array[i] = c;
	      i++;
	}

       return(array);
}
