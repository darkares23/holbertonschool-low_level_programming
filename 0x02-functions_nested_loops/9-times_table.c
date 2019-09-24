#include "holberton.h"
/**
*times_table - Display the 9 times table
*/
void times_table(void)
{
int a, b, c, digit1, digit2;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c >= 10)
{
digit1 = c / 10;
digit2 = c % 10;

_putchar(digit1 + '0');
_putchar(digit2 + '0');
}
else
{
if (a != 0)
{
_putchar(' ');
}
if (digit1 == 0)
{
_putchar (' ');
}
_putchar(c + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
if (b == 9)
{
_putchar('\n');
}
}
b = 0;
}
}
