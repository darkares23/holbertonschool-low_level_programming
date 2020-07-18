#include "holberton.h"
/**
*print_line - prints a line
*Return: 14 lines of numbers
*
*@n: Large of the line
*/
void print_line(int n)
{
	int large;
	for (large = 0; large < n; large++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
