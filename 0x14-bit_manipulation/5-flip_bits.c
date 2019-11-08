#include "holberton.h"

/**
 * flip_bits -   function that sets the value of a bit to 0 at a given index.
 * @n: num
 * @m: num2
 * Return: bits or 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, x_or = n ^ m;

	while (x_or > 0)
	{
		if ((x_or & 1) == 1)
			count++;
		x_or = x_or >> 1;
	}
	return (count);
}
