#include "holberton.h"
/**
*print_times_table - Display the 9 times table
*/
void print_times_table(int n)
{
int a, b, resutl, digit1, digit2;
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
resutl = a * b;
if (resutl >= 10)
{
digit1 = resutl % 10;
digit2 = resutl / 10;
_putchar(' ');
_putchar(digit2 + '0');
_putchar(digit1 + '0');
}
else
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(resutl + '0');
}
if (b != 9)
{
_putchar(',');
}
if (b == 9)
{
_putchar('\n');
}
}
}
}
