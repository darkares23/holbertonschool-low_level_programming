#include "holberton.h"
/**
*more_numbers - prints numbers 0 to 9 per line. exept 2 and 4
*Return: 14 lines of numbers
*
*/
void more_numbers(void)
{
int line, number;
for (line = 0; line < 10; line++)
{
for (number = 0; number < 15; number++)
{
if (number > 9)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
_putchar ('\n');
}
}
