#include "holberton.h"
/**
*print_line - prints numbers 0 to 9 per line. exept 2 and 4
*Return: 14 lines of numbers
*
*@n: Large of the line
*/
void print_line(int n)
{
for (int large = 0; large < n; large++)
{
_putchar('_');
}
_putchar('\n');
}
