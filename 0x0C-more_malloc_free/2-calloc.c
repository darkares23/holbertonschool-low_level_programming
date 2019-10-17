#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - concatenates 2 strings
 * @nmemb: stirng 1
 * @size: string 2
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, sized;

	sized = nmemb * size;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(sized);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sized; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
