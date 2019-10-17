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

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
