#include "holberton.h"

/**
*_pow_recursion - return the value of x to the y power
*@x: value to return
*@y: power of x
*Return: x
*/

int _pow_recursion(int x, int y)
{
if (x < 0)
return (-1);
else if (x == 0)
return (0);
return (x = x * _pow_recursion(x, y - 1));
_putchar('\0');
}
