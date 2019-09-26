#include "holberton.h"
/**
*print_triangle - prints triangle equal to the size variable
*Return: 14 lines of numbers
*
*@size: Large of the line
*/
void print_triangle(int size)
{
int lines, triangle, sp;
if (size <= 0)
_putchar('\n');
for (lines = 0; lines < size; lines++)
{
for (triangle = 0; triangle < size; triangle++)
{
sp = size - lines - 1;
if (triangle <= sp)
_putchar (' ');
else
{
_putchar ('#');
}
}
_putchar ('\n');
}
}