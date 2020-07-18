#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: amount of int space requiered
 * Return: Null or space required
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *space;

	if (!(b > 0))
		exit(98);

	space = malloc(b);

	if (space == NULL)
		exit(98);

	return (space);
}
