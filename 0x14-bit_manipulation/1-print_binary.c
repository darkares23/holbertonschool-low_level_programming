#include "holberton.h"

/**
 * print_binary -  prints the binary representation of a decimal.
 * @n: int to converto to bin
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (1 & n)
		_putchar(1 + '0');
	else
	_putchar(0 + '0');
}
