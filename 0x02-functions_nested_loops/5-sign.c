#include "holberton.h"
/**
*print_sign - Display message
*
*@n: number to verify
*
*Return: if is a positive zero or negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
