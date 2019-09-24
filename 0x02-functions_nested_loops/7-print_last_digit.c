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
int lastDigit;
{
lastDigit = n % 10;
if (lastDigit < 0)
lastDigit = lastDigit * -1;
_putchar(lastDigit + '0');
}
return (lastDigit);
}
