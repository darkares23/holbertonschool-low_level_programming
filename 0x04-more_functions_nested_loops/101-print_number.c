#include "holberton.h"
#include <stdio.h>

/**
 * print_number - function to print an interger
 *@n: parameter to print as interger
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
