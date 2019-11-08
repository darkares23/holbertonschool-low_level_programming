#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	if (p[0] == 1)
		return (1);
	else
		return (0);
	return (0);
}
