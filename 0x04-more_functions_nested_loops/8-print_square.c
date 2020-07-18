#include "holberton.h"
/**
*print_square - prints squares equal to the size variable
*Return: 14 lines of numbers
*
*@size: Large of the line
*/
void print_square(int size)
{
	int lines, square;
	if (size <= 0)
		_putchar('\n');
	for (lines = 0; lines < size; lines++)
	{
		for (square = 0; square < size; square++)
		{
			if (size != 0)
				_putchar('#');
		}
		_putchar('\n');
	}
}
