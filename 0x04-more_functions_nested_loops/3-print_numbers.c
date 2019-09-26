#include "holberton.h"
/**
*print_numbers - prints numbers 0 to 9 per line
*Return: true or false if is uppercase
*
*/
void print_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
_putchar(a + '0');
_putchar('\n');
}
