#include "holberton.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: num
 * @index: index of value
 * Return: bits or 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int var1 = 1 << index;

	if (index > 64)
		return (-1);
	*n |= var1;
	return (1);
}
