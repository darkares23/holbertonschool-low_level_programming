#include "holberton.h"

/**
*_pow_recursion - return the value of x to the y power
*@x: value to return
*@y: power of x
*Return: x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
