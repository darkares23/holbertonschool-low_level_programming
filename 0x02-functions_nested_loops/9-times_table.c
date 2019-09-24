#include "holberton.h"
/**
*times_table - Display the 9 times table
*/
void times_table(void)
{
int line, column;
int digit1, digit2;
int multiple;

for (line = 0; line <= 9; line++)
{
for (column = 0; column <= 9; column++)
{
multiple = line * column;
if (multiple >= 10)
{
digit1 = multiple % 10;
digit2 = multiple / 10;
_putchar(' ');
_putchar(digit1 + '0');
_putchar(digit2 + '0');
}
else
{
if (column != 0)
{
_putchar(' ');
}
_putchar(multiple + '0');

}
if (column != 9)
{
_putchar(',');
}
if (column == 9)
{
_putchar('\n');
}
}
column = 0;
}
}
