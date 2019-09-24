#include "holberton.h"
/**
*_abs - Display abs
*
*Return: if is a positive zero or negative
*
*@n: number to verify
*/
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
else
return (n);
}