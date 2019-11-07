#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: num
 * @index: index of value
 * Return: bits or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (index > 31)
		return (-1);
	if (n == 0 && index == 0)
		return (0);
	for (; n; count++)
	{
		if (count == index)
			return ((n & 1));
		n >>= 1;
	}
	return ((n & 1));
}
