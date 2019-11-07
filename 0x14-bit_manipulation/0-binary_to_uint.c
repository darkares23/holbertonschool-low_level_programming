#include "holberton.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: binary to converto to int
 * Return: 0 or the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_bin = 0, temp = 0, i = 0;
	int power = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i)
	{
		temp = b[i] - 48;
		converted_bin += (temp * power);
		power *= 2;
		i--;
	}
	return (converted_bin);
}
