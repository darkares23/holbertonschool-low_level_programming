#include "holberton.h"
/**
*print_last_digit - Display last digit of a number
*
*@n: number to verify
*
*Return: if is a positive zero or negative
*/
int print_last_digit(int n)
{
int i = ((n < 0) ? ((n * -1) % 10) : n % 10);
_putchar(i + '0');
return (i);
}
