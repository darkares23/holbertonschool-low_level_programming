#include "holberton.h"
/**
*print_last_digit - Display last digit of a number
*
*Return: if is a positive zero or negative
*
*@n: number to verify
*/
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
n = n * -1;
}
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}