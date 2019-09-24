#include "holberton.h"
/**
*jack_bauer - Display all minutes in jack day
*/
void jack_bauer(void)
{
int a, b, firstDigit, secondDigit;
for (a = 0; a < 24; a++)
for (b = 0; b < 60; b++)
{
firstDigit = a / 10;
secondDigit = a % 10;
_putchar (firstDigit + '0');
_putchar (secondDigit + '0');
_putchar (':');
firstDigit = b / 10;
secondDigit = b % 10;
_putchar (firstDigit + '0');
_putchar (secondDigit + '0');
_putchar('\n');
}
}